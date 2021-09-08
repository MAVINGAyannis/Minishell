/*
** EPITECH PROJECT, 2019
** PSU_minishell2_2019
** File description:
** get_arg.c
*/
#include "main.h"

char **get_arg_2(char **present_arg, char *buffer)
{
    int x = 0;
    int x_2 = 0;
    int y = 0;
    present_arg = malloc(sizeof(char *) * 50);

    for (int i = 0; i != 50 + 1; i++)
        present_arg[i] = malloc(sizeof(char) * 50);
    while (buffer[x] != '\0' && buffer[x] != '\n') {
        present_arg[y][x_2] = buffer[x];
        x_2 = x_2 + 1;
        x++;
        if (buffer[x] == ' ') {
            present_arg[y][x_2] = '\0';
            y++;
            x_2 = 0;
            x++;
        }
    }
    present_arg[y + 1] = NULL;
    return (present_arg);
}

int space_manage(int x, char *buffer)
{
    for (x = 0; buffer[x] == ' '; x++)
        ;
    return (x);
}

char **get_arg(char **arg_2, char *buffer)
{
    int x = space_manage(x, buffer);
    int x_2 = 0;
    int y = 0;
    char **arg = malloc(sizeof(char *) * 50);

    for (int i = 0; i != 50 + 1; i++)
        arg[i] = malloc(sizeof(char) * 50);
    while (buffer[x] != '\0' && buffer[x] != '\n') {
        arg[y][x_2] = buffer[x];
        x_2 = x_2 + 1;
        x++;
        if (buffer[x] == ' ' && buffer[x + 1] == ';') {
            arg[y][x_2] = '\0';
            y++;
            x_2 = 0;
            x = x + 3;
        }
    }
    arg[y + 1] = NULL;
    return (arg);
}