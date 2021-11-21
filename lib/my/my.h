/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** task 02
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <curses.h>

typedef struct game_s
{
    int key;
    char **map;
    int pos_x_P;
    int pos_y_P;
    int *pos_y_O;
    int *pos_x_O;
    int nb_O;
} game_t;

void message(int ac, char **av);
int open_file(int ac, char **av);
char *read_file(char **av, int fd);
char **my_new_array(char *buffer);
char *my_strndup(char *src, int n);
int my_strlen_find_backslash_n(char const *str);
char *my_strncpy(char *dest, char const *src, int n);
void move_p_up(game_t *game);
void check_move(game_t *game);
void set_position(game_t *game, int i, int j);
void position_p(game_t *game);
void print_map(char **map);
void main_loop(game_t *game);
void set_position(game_t *game, int i, int j);
void position_p(game_t *game);
int check_poisition_o(game_t *game, int i, int j, int k);
void set_position_o(game_t *game);
void check_pos(game_t *game);
void move_x_up(game_t *game);
void move_x_right(game_t *game);
void move_x_left(game_t *game);
void move_x_dawn(game_t *game);
int check_win(game_t *game);
char **malloc_array(char *buffer, char **array);

int my_getnbr(char const *str);
int my_put_nbr(int nb);
void my_putchar(char c);
int my_putstr(char const *str);
int my_strlen(char const *str);
char *my_strncpy(char *dest ,char const *src, int n);
