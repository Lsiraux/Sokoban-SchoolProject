/*
** EPITECH PROJECT, 2022
** check_win.c
** File description:
** check_win.c
** First edition:
** 09:10:49 04/03/2022
*/

#include "../include/my.h"

int check_str(const char *str, char c)
{
    for (int i = 0; str[i] != 0; i++) {
        if (str[i] == c)
            return 1;
    }
    return 0;
}

int check_a(sokoban_t *sok, int x, int y)
{
    char *str = "P O";
    if (check_str(str, sok->act_map[y - 1][x]) == 0
    && check_str(str, sok->act_map[y][x + 1]) == 0)
        return 1;
    if (check_str(str, sok->act_map[y][x + 1]) == 0
    && check_str(str, sok->act_map[y + 1][x]) == 0)
        return 1;
    if (check_str(str, sok->act_map[y + 1][x]) == 0
    && check_str(str, sok->act_map[y][x - 1]) == 0)
        return 1;
    if (check_str(str, sok->act_map[y][x - 1]) == 0
    && check_str(str, sok->act_map[y - 1][x]) == 0)
        return 1;
    return 0;
}

int check_w(sokoban_t *sok)
{
    int x, y;

    for (int i = 0; i < sok->number_o; i++) {
        x = sok->o_pos[i][0];
        y = sok->o_pos[i][1];
        if (sok->act_map[y][x] != 'X')
            return 1;
    }
    return 0;
}

int check_l(sokoban_t *sok)
{
    int x = 0;
    int y = 0;

    while (sok->act_map[y] != NULL) {
        if (sok->act_map[y][x] == 'X' && check_a(sok, x, y) == 0)
            return 0;
        else if (sok->act_map[y][x] == '\n') {
            y++;
            x = 0;
        } else
            x++;
    }
    return 1;
}
