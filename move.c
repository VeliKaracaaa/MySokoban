/*
** EPITECH PROJECT, 2019
** move
** File description:
** move
*/

#include "include/my.h"

void move_p_up(game_t *game)
{
    if (game->map[game->pos_y_P - 1][game->pos_x_P] == '#')
        return;
    if (game->map[game->pos_y_P - 1][game->pos_x_P] == 'X') {
        move_x_up(game);
        print_map(game->map);
        return;
    }
    game->map[game->pos_y_P - 1][game->pos_x_P] = 'P';
    game->map[game->pos_y_P][game->pos_x_P] = ' ';
    game->pos_y_P--;
    check_pos(game);
    print_map(game->map);
}

void move_p_right(game_t *game)
{
    if (game->map[game->pos_y_P][game->pos_x_P + 1] == '#')
        return;
    if (game->map[game->pos_y_P][game->pos_x_P + 1] == 'X') {
        move_x_right(game);
        print_map(game->map);
        return;
    }
    game->map[game->pos_y_P][game->pos_x_P + 1] = 'P';
    game->map[game->pos_y_P][game->pos_x_P] = ' ';
    game->pos_x_P++;
    check_pos(game);
    print_map(game->map);
}

void move_p_left(game_t *game)
{
    if (game->map[game->pos_y_P][game->pos_x_P - 1] == '#')
        return;
    if (game->map[game->pos_y_P][game->pos_x_P - 1] == 'X') {
        move_x_left(game);
        print_map(game->map);
        return;
    }
    game->map[game->pos_y_P][game->pos_x_P - 1] = 'P';
    game->map[game->pos_y_P][game->pos_x_P] = ' ';
    game->pos_x_P--;
    check_pos(game);
    print_map(game->map);
}

void move_p_dawn(game_t *game)
{
    if (game->map[game->pos_y_P + 1][game->pos_x_P] == '#')
        return;
    if (game->map[game->pos_y_P + 1][game->pos_x_P] == 'X') {
        move_x_dawn(game);
        print_map(game->map);
        return;
    }
    game->map[game->pos_y_P + 1][game->pos_x_P] = 'P';
    game->map[game->pos_y_P][game->pos_x_P] = ' ';
    game->pos_y_P++;
    check_pos(game);
    print_map(game->map);
}

void check_move(game_t *game)
{
    switch (game->key)
    {
        case 65:
            move_p_up(game);
            break;
        case 67:
            move_p_right(game);
            break;
        case 68:
            move_p_left(game);
            break;
        case 66:
            move_p_dawn(game);
            break;
    }
}