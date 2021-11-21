/*
** EPITECH PROJECT, 2019
** my_sokoban
** File description:
** my_sokoban
*/

#include "include/my.h"

void print_map(char **map)
{
    int i = 0;

    clear();
    while (map[i] != NULL) {
        printw("%s\n", map[i]);
        i++;
    }
    i = 0;
    refresh();
}

void main_loop(game_t *game)
{
    position_p(game);
    initscr();
    print_map(game->map);
    while (check_win(game) != 1) {
        noecho();
        game->key = getch();
        check_move(game);
    }
    refresh();
    endwin();
}

void manege_error(int ac, char **av)
{
    if (ac != 2)
        exit (84);
    if (ac == 2)
        if (av[1][0] == '-' && av[1][1] == 'h')
            message(ac, av);
}

int main(int ac, char **av)
{
    game_t game;
    int fd = open_file(ac, av);
    char *read;
    int i = 0;
    manege_error(ac, av);
    read = read_file(av, fd);
    game.map = my_new_array(read);
    main_loop(&game);
    while (i < my_strlen_find_backslash_n(read)) {
        free(game.map[i]);
        i++;
    }
    free(read);
    free(game.map);
    close(fd);
    return (0);
}
