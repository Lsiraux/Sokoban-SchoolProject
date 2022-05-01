/*
** EPITECH PROJECT, 2022
** print_map.c
** File description:
** print_map.c
** First edition:
** 14:31:19 03/03/2022
*/

#include "../include/my.h"

void print_tab(sokoban_t *sok)
{
    for (int i = 0; sok->act_map[i] != NULL; i++)
        printw("%s", sok->act_map[i]);
}
