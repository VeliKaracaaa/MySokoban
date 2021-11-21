/*
** EPITECH PROJECT, 2019
** message
** File description:
** message
*/

#include "include/my.h"

void message(int ac, char **av)
{
    my_putstr("USAGE\n");
    my_putstr("     ./my_sokoban map\n");
    my_putstr("DESCRIPTION\n");
    my_putstr("     map file representing the warehouse map, containing '#\
' for walls,\n");
    my_putstr("         'P' for the player, ‘X’ for boxes and ‘O’ for stora\
ge locations.\n");
    exit(0);
}
