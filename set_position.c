/*
** EPITECH PROJECT, 2019
** set position
** File description:
** set_position
*/

#include "include/my.h"

void set_position(game_t *game, int i, int j)
{
    if (game->map[i][j] == 'P') {
        game->pos_x_P = j;
        game->pos_y_P = i;
    }
}

void position_p(game_t *game)
{
    game->nb_O = 0;
    for (int i = 0; game->map[i] != NULL; i++) {
        for (int j = 0; game->map[i][j] != '\0'; j++) {
            set_position(game, i, j);
            if (game->map[i][j] == 'O')
                game->nb_O++;
        }
    }
    game->pos_x_O = malloc(sizeof(int) * game->nb_O);
    game->pos_y_O = malloc(sizeof(int) * game->nb_O);
    set_position_o(game);
}

int check_poisition_o(game_t *game, int i, int j, int k)
{
    if (game->map[i][j] == 'O') {
        game->pos_y_O[k] = i;
        game->pos_x_O[k] = j;
        k++;
        return (k);
    }
    return (k);
}

void set_position_o(game_t *game)
{
    int k = 0;

    for (int i = 0; game->map[i] != NULL; i++) {
        for (int j = 0; game->map[i][j] != '\0'; j++) {
            k = check_poisition_o(game, i, j, k);
        }
    }
}

void check_pos(game_t *game)
{
    for (int i = 0; i != game->nb_O; i++) {
        if (game->map[game->pos_y_O[i]][game->pos_x_O[i]] == ' ')
            game->map[game->pos_y_O[i]][game->pos_x_O[i]] = 'O';
    }
}
