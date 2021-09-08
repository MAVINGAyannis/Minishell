/*
** EPITECH PROJECT, 2019
** PSU_minishell2_2019
** File description:
** exec.c
*/
#include "main.h"

void execution_program(char **present_arg, char **sep_path)
{
    int PID = fork();

    present_arg = form(present_arg);
    builtin_cd(present_arg);
    if (PID == 0)
        execve(present_arg[0], present_arg, sep_path);
    waitpid(-1, &PID, 0);
}

char *get_line(char *repository, char *buffer)
{
    size_t i = 0;

    repository = NULL;
    repository = getcwd(repository, 0);
    repository = current_repository(repository);
    my_putstr(repository);
    my_putstr(" > ");
    getline(&buffer, &i, stdin);
    return (buffer);
}

char **replace_arg(char **present_arg, char **arg, int i)
{
    present_arg[i] = "\0";
    i--;
    while (i >= 0) {
        present_arg[i] = arg[i];
        i--;
    }
    return (present_arg);
}

char **present_argument(char **present_arg, char **arg, Counter *counter)
{
    present_arg = NULL;

    present_arg = get_arg_2(present_arg, arg[counter->arg_counter]);
    counter->arg_counter++;
    return (present_arg);
}