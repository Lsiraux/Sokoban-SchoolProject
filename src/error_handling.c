/*
** EPITECH PROJECT, 2022
** check_map.c
** File description:
** check_map.c
** First edition:
** 18:03:01 03/03/2022
*/

#include "../include/my.h"

int check_map(char *file)
{
    struct stat map;
    stat(file, &map);
    int fd = open(file, O_RDONLY);
    char *buffer = malloc(sizeof(char) * map.st_size);
    read(fd, buffer, map.st_size);

    for (int i = 0; buffer[i] != 0; i++) {
        if (buffer[i] != 'P' && buffer[i] != '#'
            && buffer[i] != 'X' && buffer[i] != 'O'
            && buffer[i] != '\n' && buffer[i] != ' ') {
            close(fd);
            return 1;
        }
    }
    close(fd);
    return 0;
}

int check_file_validity(char *file)
{
    int ff;
    int fd = open(file, O_DIRECTORY);
    if (fd != -1) {
        close(fd);
        return 1;
    }

    ff = open(file, O_RDONLY);

    if (ff == -1) {
        close(ff);
        return 1;
    }
    return 0;

}

int final_check(int ac, char *file)
{
    if (ac != 2)
        return 1;
    else if (check_file_validity(file) == 1 || check_map(file) == 1)
        return 1;
    return 0;
}
