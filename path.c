/*
** EPITECH PROJECT, 2019
** PSU_minishell2_2019
** File description:
** path.c
*/
#include "main.h"

int my_str_is_same(char *str)
{
    int i = 0;
    char *path = "PATH";
    int o = 0;

    while (str[i] != '\0') {
        if (str[i] == path[i]) {
            o++;
            if (o >= 4)
                return (1);
        }
        i++;
    }
    return (0);
}

char *my_getenv(char **env)
{
    int y = 0;
    int x = 0;

    while (my_str_is_same(env[y]) == 0) {
        x++;
        if (env[y][x] == '\0') {
            y++;
            x = 0;
        }
    }
    return (env[y]);
}

char **separate_path(char **sep_path_1, char *path)
{
    int x = 5;
    int x_2 = 0;
    int y = 0;
    char **sep_path = malloc(sizeof(char *) * 50);

    for (int i = 0; i != 50 + 1; i++)
        sep_path[i] = malloc(sizeof(char) * 50);

    while (path[x] != '\0') {
        sep_path[y][x_2] = path[x];
        x_2 = x_2 + 1;
        x++;
        if (path[x] == ':') {
            y++;
            x_2 = 0;
            x++;
        }
    }
    sep_path[y + 1] = NULL;
    return (sep_path);
}

char **argument(char **arg, char *buffer, Counter *counter)
{
    counter->arg_counter = 0;
    arg = get_arg(arg, buffer);
    get_out(arg);
    return (arg);
}