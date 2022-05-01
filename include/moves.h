/*
** EPITECH PROJECT, 2022
** moves.h
** File description:
** moves.h
** First edition:
** 14:29:27 03/03/2022
*/

#ifndef MYSOKOBAN_MOVES_H
#define MYSOKOBAN_MOVES_H

#include "struct.h"

void move_up(sokoban_t *sok, int key);
void move_down(sokoban_t *sok, int key);
void move_left(sokoban_t *sok, int key);
void move_right(sokoban_t *sok, int key);
int c_b_r(sokoban_t *sok, int key);
void m_b_u(sokoban_t *sok, int key);
void m_b_d(sokoban_t *sok, int key);
void m_b_l(sokoban_t *sok, int key);
void m_b_r(sokoban_t *sok, int key);

#endif
