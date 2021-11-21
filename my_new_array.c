/*
** EPITECH PROJECT, 2019
** my_new_array
** File description:
** my_new_array
*/

#include "include/my.h"

char **malloc_array(char *buffer, char **array)
{
    int i = 0;
    int count_buffer_backslash_n = 0;
    int x = 0;
    int y = 0;

    for (int count_buffer = 0; buffer[count_buffer] != '\0'; count_buffer++) {
        if (buffer[count_buffer] == '\n')
            count_buffer_backslash_n++;
    }
    array = malloc(sizeof(char *) * (count_buffer_backslash_n + 2));
    while (i <= count_buffer_backslash_n) {
        while (buffer[y] != '\n' && buffer[y] != '\0') {
            y++;
            x++;
        }
        y++;
        array[i] = malloc(sizeof(char) * (x + 1));
        x = 0;
        i++;
    }
    return (array);
}

char **my_new_array(char *buffer)
{
    int i = 0;
    int j = 0;
    int count_buffer = 0;
    char **array = malloc_array(buffer, array);

    while (buffer[count_buffer] != '\0') {
        if (buffer[count_buffer] == '\n') {
            array[i][j] = '\0';
            count_buffer++;
            i++;
            j = 0;
        }
        array[i][j] = buffer[count_buffer];
        j++;
        count_buffer++;
    }
    i = 0;
    return (array);
}