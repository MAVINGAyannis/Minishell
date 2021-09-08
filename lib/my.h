/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** my.h
*/

#ifndef MY_H_
#define MY_H_
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void my_putchar(char c);

int my_printf(char *f, ...);

int my_put_nbr(int nb);

char *my_putstr(char const *str);

int my_printf(char *f, ...);

int my_getnbr(char const *str);

int my_str_isnum_with_back(char const *str);

int my_str_isnum(char const *str);

int my_strlen(char *str);

int my_strcmp(char const *s1, char const *s2);

char **my_show_wordtab2(char *str, char character);

#endif
