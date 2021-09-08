/*
** EPITECH PROJECT, 2019
** AIA_n4s_2019
** File description:
** my_wordtab.c
*/
#include "../my.h"

char **my_show_wordtab2(char *str, char character)
{
    char **tab = malloc(sizeof(char **) * my_strlen(str));
    int i = 0;
    int y = 0;
    int x;

    while (str[i] != '\0') {
        x = 0;
        tab[y] = malloc(sizeof(char *) * my_strlen(str));
        while (str[i] == character && str[i] != 0)
            i++;
        while (str[i] != character && str[i] != 0)
            tab[y][x++] = str[i++];
        y++;
    }
    return (tab);
}
