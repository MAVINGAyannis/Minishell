/*
** EPITECH PROJECT, 2019
** my_strcmp
** File description:
** my_strcmp
*/

int my_strcmp(char const *s1, char const *s2)
{
    int b = 0;
    int a = 0;

    for (int i = 0; s1[i] != '\0'; i++)
        a = s1[i] + a;
    for (int j = 0; s2[j] != '\0'; j++)
        b = s2[j] + b;
    if (a == b)
        return (1);
    else
        return (0);
}
