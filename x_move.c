/*
** EPITECH PROJECT, 2019
** X_move
** File description:
** X_move
*/

#include "include/my.h"

void move_x_right(game_t *game)
{
    if (game->map[game->pos_y_P][game->pos_x_P + 2] == '#')
        return;
    game->map[game->pos_y_P][game->pos_x_P + 2] = 'X';
    game->map[game->pos_y_P][game->pos_x_P + 1] = 'P';
    game->map[game->pos_y_P][game->pos_x_P] = ' ';
    game->pos_x_P++;
}

void move_x_up(game_t *game)
{
    if (game->map[game->pos_y_P - 2][game->pos_x_P] == '#')
        return;
    game->map[game->pos_y_P - 2][game->pos_x_P] = 'X';
    game->map[game->pos_y_P - 1][game->pos_x_P] = 'P';
    game->map[game->pos_y_P][game->pos_x_P] = ' ';
    game->pos_y_P--;
}
void move_x_left(game_t *game)
{
    if (game->map[game->pos_y_P][game->pos_x_P - 2] == '#')
        return;
    game->map[game->pos_y_P][game->pos_x_P - 2] = 'X';
    game->map[game->pos_y_P][game->pos_x_P - 1] = 'P';
    game->map[game->pos_y_P][game->pos_x_P] = ' ';
    game->pos_x_P--;
}

void move_x_dawn(game_t *game)
{
    if (game->map[game->pos_y_P + 2][game->pos_x_P] == '#')
        return;
    game->map[game->pos_y_P + 2][game->pos_x_P] = 'X';
    game->map[game->pos_y_P + 1][game->pos_x_P] = 'P';
    game->map[game->pos_y_P][game->pos_x_P] = ' ';
    game->pos_y_P++;
}
int check_win(game_t *game)
{
    int check = 0;

    for (int i = 0; i != game->nb_O; i++) {
        if (game->map[game->pos_y_O[i]][game->pos_x_O[i]] == 'X')
            check++;
    }
    if (check == game->nb_O)
        return (1);
    return (0);
}