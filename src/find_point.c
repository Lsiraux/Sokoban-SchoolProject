/*
** EPITECH PROJECT, 2022
** find_o.c
** File description:
** find_o.c
** First edition:
** 16:49:28 03/03/2022
*/

#include "../include/my.h"

int number_point(sokoban_t *sok)
{
    int result = 0;

    for (int i = 0; sok->buffer[i] != 0; i++) {
        if (sok->buffer[i] == 'O')
            result++;
    }
    sok->number_o = result;
    return result;
}

void find_point(sokoban_t *sok)
{
    int i = 0;
    int x = 0;
    int y = 0;
    int length = number_point(sok);
    sok->o_pos = malloc(sizeof(int *) * length + 1);
    sok->o_pos[0] = malloc(sizeof(int) * 2);

    while (sok->act_map[y]) {
        if (sok->act_map[y][x] == 'O') {
            sok->o_pos[i][0] = x;
            sok->o_pos[i][1] = y;
            i++;
            sok->o_pos[i] = malloc(sizeof(int) * 2);
            x++;
        } else if (sok->act_map[y][x] == '\n') {
            x = 0;
            y++;
        } else
            x++;
    }
}
