/*
** EPITECH PROJECT, 2022
** init_sok.c
** File description:
** init_sok.c
** First edition:
** 14:22:57 01/03/2022
*/

#include "../include/my.h"

void fill_origin_map(sokoban_t *sok, int length)
{
    int x = 0;
    int y = 0;
    sok->origin_map[0] = malloc(sizeof(char) * length);

    for (int i = 0; sok->buffer[i] != 0; i++) {
        if (sok->buffer[i] == '\n') {
            sok->origin_map[y][x] = '\n';
            x = 0;
            y++;
            sok->origin_map[y] = malloc(sizeof(char) * length);
        } else {
            sok->origin_map[y][x] = sok->buffer[i];
            x++;
        }
    }
    sok->origin_map[y + 1] = NULL;
}

void fill_map(sokoban_t *sok, int length)
{
    int x = 0;
    int y = 0;
    sok->act_map[0] = malloc(sizeof(char) * length);

    for (int i = 0; sok->buffer[i] != 0; i++) {
        if (sok->buffer[i] == '\n') {
            sok->act_map[y][x] = '\n';
            x = 0;
            y++;
            sok->act_map[y] = malloc(sizeof(char) * length);
        } else {
            sok->act_map[y][x] = sok->buffer[i];
            x++;
        }
    }
    sok->act_map[y + 1] = NULL;
}

int get_nb_lines(char *buffer)
{
    int result = 0;

    for (int i = 0; buffer[i] != 0; i++) {
        if (buffer[i] == '\n')
            result++;
    }
    return result;
}

int length(char *buffer)
{
    int result = 0;

    for (int i = 0; buffer[i] != '\n'; i++)
        result++;
    return result;
}

void init_sok(sokoban_t *sok, char **av)
{
    int fd = open(av[1], O_RDONLY);
    stat(av[1], &sok->map);
    sok->buffer = malloc(sizeof(char) * sok->map.st_size);
    read(fd, sok->buffer, sok->map.st_size);
    int line_length = length(sok->buffer) + 1;
    int nb_lines = get_nb_lines(sok->buffer) + 1;
    sok->act_map = malloc(sizeof(char *) * nb_lines);
    sok->origin_map = malloc(sizeof(char *) * nb_lines);
    sok->origin_map[0] = malloc(sizeof(char) * line_length);
    fill_map(sok, line_length);
    fill_origin_map(sok, line_length);
    find_player(sok);
    find_point(sok);
    close(fd);
}
