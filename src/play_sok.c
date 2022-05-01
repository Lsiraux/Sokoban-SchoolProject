/*
** EPITECH PROJECT, 2022
** play_sok.c
** File description:
** play_sok.c
** First edition:
** 11:59:51 03/03/2022
*/

#include "../include/my.h"

void play_sok_second(sokoban_t *sok, int key)
{
    switch (key) {
        case KEY_DOWN :
            move_down(sok, key);
            replace_final(sok);
            print_tab(sok);
            refresh();
            break;
        case KEY_RIGHT :
            move_right(sok, key);
            replace_final(sok);
            print_tab(sok);
            refresh();
            break;
        default :
            print_tab(sok);
            refresh();
    }
}

void play_sok_first(sokoban_t *sok, int key)
{
    switch (key) {
        case KEY_UP :
            move_up(sok, key);
            replace_final(sok);
            print_tab(sok);
            refresh();
            break;
        case KEY_LEFT :
            move_left(sok, key);
            replace_final(sok);
            print_tab(sok);
            refresh();
            break;
        default :
            play_sok_second(sok, key);
    }
}
