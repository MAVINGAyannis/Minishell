/*
** EPITECH PROJECT, 2019
** PSU_minishell2_2019
** File description:
** buid_cd.c
*/
#include "main.h"

char *current_repository(char *repository)
{
    char *current = malloc(sizeof(char *) * my_strlen(repository));
    int b = 0;
    int v = 0;
    int i = 0;

    while (repository[i] != '\0') {
        i++;
        if (repository[i] == '/')
            b = i;
    }
    b++;
    while (repository[b] != '\0') {
        current[v] = repository[b];
        v++;
        b++;
    }
    return (current);
}

int builtin_cd(char **present_arg)
{
    if (present_arg[0][0] == 'c' && present_arg[0][1] == 'd') {
        if (present_arg[1] == NULL) {
            chdir("/");
            return (0);
        }
        chdir(present_arg[1]);
        return (0);
    }
    return (1);
}