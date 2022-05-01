/*
** EPITECH PROJECT, 2022
** find_player.c
** File description:
** find_player.c
** First edition:
** 14:20:59 03/03/2022
*/

#include "../include/my.h"

void find_player(sokoban_t *sok)
{
    int x = 0;
    int y = 0;

    while (sok->act_map[y] != NULL) {
        if (sok->act_map[y][x] == 'P') {
            sok->p_x = x;
            sok->p_y = y;
            return;
        } else if (sok->act_map[y][x] == '\n') {
            x = 0;
            y++;
        } else
            x++;
    }
}
