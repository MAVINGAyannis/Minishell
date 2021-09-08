/*
** EPITECH PROJECT, 2019
** PSU_minishell2_2019
** File description:
** main.c
*/
#include "main.h"

void get_out(char **arg)
{
    if (my_strcmp("exit", arg[0]) == 1)
        exit (1);
}

char **form(char **present_arg)
{
    char *str = malloc(sizeof(char *) * 10);
    int e = 5;
    char *bin = "/bin/\0";
    char *cd = "cd";

    if (my_strcmp("cd", present_arg[0]) == 1)
        return (present_arg);
    for (int i = 0; bin[i] != '\0'; i++)
        str[i] = bin[i];
    for (int i = 0; present_arg[0][i] != '\0'; i++) {
        str[e] = present_arg[0][i];
        e++;
    }
    str[e] = '\0';
    present_arg[0] = str;
    return (present_arg);
}

void minishell_2(int argc, char **argv, char **env)
{
    char *buffer = NULL;
    char *path = my_getenv(env);
    char **sep_path = separate_path(sep_path, path);
    char **all_arg = NULL;
    char **present_arg = NULL;
    char *repository = NULL;
    Counter Counters;
    Counter *counter = &Counters;

    while (42) {
        all_arg = NULL;
        buffer = get_line(repository, buffer);
        all_arg = argument(all_arg, buffer, counter);
        while (all_arg[counter->arg_counter] != NULL) {
            present_arg = present_argument(present_arg, all_arg, counter);
            execution_program(present_arg, sep_path);
        }
    }
}

void main(int argc, char **argv, char **env)
{
    minishell_2(argc, argv, env);
}