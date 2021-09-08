/*
** EPITECH PROJECT, 2019
** PSU_minishell2_2019
** File description:
** main.h
*/
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "lib/my.h"
#include <sys/types.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <dirent.h>

typedef struct Counter Counter;
struct Counter
{
    int arg_counter;
};

int my_str_is_same(char *str);

char *my_getenv(char **env);

char **separate_path(char **sep_path_1, char *path);

char **get_arg(char **arg_2, char *buffer);

char **get_arg_2(char **arg_2, char *buffer);

void execution_program(char **all_arg, char **sep_path);

char **argument(char **arg, char *buffer, Counter *counter);

void get_out(char **arg);

char *current_repository(char *repository);

int builtin_cd(char **arg);

char **form(char **arg);

char *get_line(char *repository, char *buffer);

char **present_argument(char **present_arg, char **arg, Counter *counter);

char **replace_arg(char **present_arg, char **arg, int i);

int semicolons(char **arg, int semi);

char **recadre_arg(char **all_arg, int semi, char **cut_arg);

void minishell_2(int argc, char **argv, char **env);

int space_manage(int x, char *buffer);