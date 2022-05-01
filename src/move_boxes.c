/*
** EPITECH PROJECT, 2022
** move_boxes.c
** File description:
** move_boxes.c
** First edition:
** 15:01:01 03/03/2022
*/

#include "../include/my.h"

int c_b_b(sokoban_t *sok, int key)
{
    if (key == KEY_UP)
        if (sok->act_map[sok->p_y - 2][sok->p_x] == '#'
        || sok->act_map[sok->p_y - 2][sok->p_x] == 'X')
            return 1;
    if (key == KEY_DOWN)
        if (sok->act_map[sok->p_y + 2][sok->p_x] == '#'
        || sok->act_map[sok->p_y + 2][sok->p_x] == 'X')
            return 1;
    if (key == KEY_LEFT)
        if (sok->act_map[sok->p_y][sok->p_x - 2] == '#'
        || sok->act_map[sok->p_y][sok->p_x - 2] == 'X')
            return 1;
    if (key == KEY_RIGHT)
        if (sok->act_map[sok->p_y][sok->p_x + 2] == '#'
        || sok->act_map[sok->p_y][sok->p_x + 2] == 'X')
            return 1;
    return 0;
}

void m_b_u(sokoban_t *sok, int key)
{
    if (c_b_b(sok, key) != 1) {
        sok->act_map[sok->p_y - 1][sok->p_x] = 'P';
        sok->act_map[sok->p_y - 2][sok->p_x] = 'X';
        sok->act_map[sok->p_y][sok->p_x] = ' ';
        sok->p_y--;
    } else
        return;
}

void m_b_d(sokoban_t *sok, int key)
{
    if (c_b_b(sok, key) != 1) {
        sok->act_map[sok->p_y + 1][sok->p_x] = 'P';
        sok->act_map[sok->p_y + 2][sok->p_x] = 'X';
        sok->act_map[sok->p_y][sok->p_x] = ' ';
        sok->p_y++;
    } else
        return;
}

void m_b_l(sokoban_t *sok, int key)
{
    if (c_b_b(sok, key) != 1) {
        sok->act_map[sok->p_y][sok->p_x - 1] = 'P';
        sok->act_map[sok->p_y][sok->p_x - 2] = 'X';
        sok->act_map[sok->p_y][sok->p_x] = ' ';
        sok->p_x--;
    } else
        return;
}

void m_b_r(sokoban_t *sok, int key)
{
    if (c_b_b(sok, key) != 1) {
        sok->act_map[sok->p_y][sok->p_x + 1] = 'P';
        sok->act_map[sok->p_y][sok->p_x + 2] = 'X';
        sok->act_map[sok->p_y][sok->p_x] = ' ';
        sok->p_x++;
    } else
        return;
}
