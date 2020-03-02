/*
** EPITECH PROJECT, 2019
** window header
** File description:
** prototypes of window management
*/

#ifndef WINDOW_H_
#define WINDOW_H_

#include  "struct.h"

void display_bck(global_t *data, bg_t *bg, mob_t *mobs);
void destroyer_moving(bg_t *bg);
void destroyer_fix(global_t *data, bg_t *bg, gamelmt_t *game_set, mob_t *mobs);
void destroyer(global_t *data, bg_t *bg, gamelmt_t *game_set, mob_t *mobs);
void display_bck2(global_t *data, bg_t *bg, mob_t *mobs);
void one_star(global_t *data, mob_t *mobs);
void two_star(global_t *data, mob_t *mobs);
void three_star(global_t *data, mob_t *mobs);
void life_display(global_t *data, bg_t *bg);
void game_loop(global_t *data, bg_t *bg, mob_t *mobs, gamelmt_t *game_set);

#endif /* !WINDOW_H_ */