/*
** EPITECH PROJECT, 2022
** game.c
** File description:
** game.c
** First edition:
** 14:53:54 03/03/2022
*/

#include "../include/my.h"

void sokoban(sokoban_t *sok)
{
    initscr();
    noecho();
    cbreak();
    print_tab(sok);
    keypad(stdscr, TRUE);
    int w;
    int l;
    int key = getch();

    while (key != 27) {
        erase();
        refresh();
        play_sok_first(sok, key);
        w = check_w(sok);
        l = check_l(sok);
        if (w == 0 || l == 1) {
            break;
        }
        key = getch();
    }
    endwin();
}
