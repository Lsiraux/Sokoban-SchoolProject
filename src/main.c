/*
** EPITECH PROJECT, 2022
** my_sokoban.c
** File description:
** my_sokoban.c
** First edition:
** 13:24:12 01/03/2022
*/

#include "../include/my.h"

int main(int ac, char **av)
{
    char *usage = "USAGE\n     ./my_sokoban map\nDESCRIPTION";
    char *usage1 = "     map file representing the warehouse map, ";
    char *usage2 = "containing ‘#’ for walls,\n";
    char *usage3 = "          ‘P’ for the player, ‘X’ for boxes and";
    char *usage4 = " ‘O’ for storage locations.\n";

    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h') {
        write(1, usage, my_strlen(usage));
        write(1, usage1, my_strlen(usage1));
        write(1, usage2, my_strlen(usage2));
        write(1, usage3, my_strlen(usage3));
        write(1, usage4, my_strlen(usage4));
        return 0;
    } else if (final_check(ac, av[1]) == 1)
        return 84;
    sokoban_t sok;
    init_sok(&sok, av);
    sokoban(&sok);
    return 0;
}
