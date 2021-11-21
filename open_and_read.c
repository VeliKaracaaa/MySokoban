/*
** EPITECH PROJECT, 2019
** open and read
** File description:
** open_and_read
*/

#include "include/my.h"

char *read_file(char **av, int fd)
{
    struct stat s;
    int size;
    char *buffer;

    stat(av[1], &s);
    buffer = malloc(sizeof(char) * (s.st_size + 1));
    size = read (fd, buffer, s.st_size);
    if (size == -1)
        exit(84);
    buffer[s.st_size] = '\0';
    return (buffer);
}

int open_file(int ac, char **av)
{
    int fd;

    fd = open(av[1], O_RDONLY);
    if (fd == -1)
        return (84);
    return (fd);
}
