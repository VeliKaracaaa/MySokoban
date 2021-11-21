/*
** EPITECH PROJECT, 2019
** my_strlen_n
** File description:
** my_strlen_find_backslash_n
*/

#include "include/my.h"

int my_strlen_find_backslash_n(char const *str)
{
    int i = 0;

    while (str[i] != '\n' && str[i] != '\0') {
        i++;
    }
    return (i);
}
