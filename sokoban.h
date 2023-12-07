/*
** EPITECH PROJECT, 2023
** B-PSU-100-MAR-1-1-sokoban-leo.gregori
** File description:
** my_sokoban : sokoban.h
*/
#include "my.h"
#ifndef SOKOBAN_H
    #define SOKOBAN_H
typedef struct s {
    struct stat info_file;
    int file_read;
    char *buffer;
    int bytes;
    int nb_line;
    char **arr;
    int nb_x;
    int nb_p;
    int nb_o;
    int nb_e;
    int pos_p_x;
    int pos_p_y;
    int pos_O_x;
    int pos_O_y;
} sokoban_t;
char **map_in_map_clone(sokoban_t *s);
void display_map(sokoban_t *s);
#endif
