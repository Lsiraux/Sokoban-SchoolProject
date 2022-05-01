/*
** EPITECH PROJECT, 2022
** move_up.c
** File description:
** move_up.c
** First edition:
** 14:15:59 03/03/2022
*/

#include "../include/my.h"

int check_border(int key, sokoban_t *sok)
{
    if (key == KEY_UP && sok->act_map[sok->p_y - 1][sok->p_x] == '#')
        return 1;
    if (key == KEY_DOWN && sok->act_map[sok->p_y + 1][sok->p_x] == '#')
        return 1;
    if (key == KEY_LEFT && sok->act_map[sok->p_y][sok->p_x - 1] == '#')
        return 1;
    if (key == KEY_RIGHT && sok->act_map[sok->p_y][sok->p_x + 1] == '#')
        return 1;
    return 0;

}

void move_up(sokoban_t *sok, int key)
{
    if (sok->act_map[sok->p_y - 1][sok->p_x] == 'X') {
        m_b_u(sok, key);
        return;
    }
    if (check_border(key, sok) != 1) {
        sok->act_map[sok->p_y][sok->p_x] = ' ';
        sok->act_map[sok->p_y - 1][sok->p_x] = 'P';
        sok->p_y--;
    } else
        return;
}

void move_down(sokoban_t *sok, int key)
{
    if (sok->act_map[sok->p_y + 1][sok->p_x] == 'X') {
        m_b_d(sok, key);
        return;
    }
    if (check_border(key, sok) != 1) {
        sok->act_map[sok->p_y][sok->p_x] = ' ';
        sok->act_map[sok->p_y + 1][sok->p_x] = 'P';
        sok->p_y++;
    } else
        return;
}

void move_left(sokoban_t *sok, int key)
{
    if (sok->act_map[sok->p_y][sok->p_x - 1] == 'X') {
        m_b_l(sok, key);
        return;
    }
    if (check_border(key, sok) != 1) {
        sok->act_map[sok->p_y][sok->p_x] = ' ';
        sok->act_map[sok->p_y][sok->p_x - 1] = 'P';
        sok->p_x--;
    } else
        return;
}

void move_right(sokoban_t *sok, int key)
{
    if (sok->act_map[sok->p_y][sok->p_x + 1] == 'X') {
        m_b_r(sok, key);
        return;
    }
    else if (check_border(key, sok) != 1) {
        sok->act_map[sok->p_y][sok->p_x + 1] = 'P';
        sok->act_map[sok->p_y][sok->p_x] = ' ';
        sok->p_x++;
    } else
        return;
}
