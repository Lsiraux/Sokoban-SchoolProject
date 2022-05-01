/*
** EPITECH PROJECT, 2022
** struct.h
** File description:
** struct.h
** First edition:
** 13:25:44 01/03/2022
*/

#ifndef MYSOKOBAN_STRUCT_H
#define MYSOKOBAN_STRUCT_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <curses.h>

typedef struct {
    int p_x;
    int p_y;
    int fd;
    int number_o;
    int **o_pos;
    char *buffer;
    char **origin_map;
    char **act_map;
    struct stat map;
} sokoban_t;

#endif
