/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** my.h
** First edition:
** 13:25:25 01/03/2022
*/

#ifndef MYSOKOBAN_MY_H
#define MYSOKOBAN_MY_H

    #include "moves.h"
    #include "lib.h"
    #include "struct.h"
    #include <curses.h>
    #include <unistd.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <fcntl.h>
    #include <signal.h>

void init_sok(sokoban_t *sok, char **av);
void ncurses();
void replace_final(sokoban_t *sok);
void my_sokoban(sokoban_t *sok);
void play_sok_first(sokoban_t *sok, int key);
void find_player(sokoban_t *sok);
void print_tab(sokoban_t *sok);
void find_point(sokoban_t *sok);
void sokoban(sokoban_t *sok);
int check_map(char *file);
int check_file_validity(char *file);
int final_check(int ac, char *file);
int check_w(sokoban_t *sok);
int check_l(sokoban_t *sok);

#endif
