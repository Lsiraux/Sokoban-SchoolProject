/*
** EPITECH PROJECT, 2022
** my_strlen.c
** File description:
** my_strlen.c
** First edition:
** 13:38:20 01/03/2022
*/

int my_strlen(const char *string)
{
    int i;

    for (i = 0; string[i] != 0; i++);
    return i;
}
