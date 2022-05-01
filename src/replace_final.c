/*
** EPITECH PROJECT, 2022
** replace_o.c
** File description:
** replace_o.c
** First edition:
** 17:25:56 03/03/2022
*/

#include "../include/my.h"

void replace_final(sokoban_t *sok)
{
    int x, y;
    for (int i = 0; i < sok->number_o; i++) {
        x = sok->o_pos[i][0];
        y = sok->o_pos[i][1];
        if (sok->act_map[y][x] == ' ')
            sok->act_map[y][x] = 'O';
    }
}
