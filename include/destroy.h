/*
** EPITECH PROJECT, 2019
** destroy
** File description:
** header file
*/

#ifndef DESTROY_H_
#define DESTROY_H_

#include "game.h"

void destroy_fixer(global_t *data, gamelmt_t *game_set, mob_t *mobs);
void destroyer_fix(global_t *data, bg_t *bg, gamelmt_t *game_set, mob_t *mobs);
void destroyer_moving(bg_t *bg);
void destroyer(global_t *data, bg_t *bg, gamelmt_t *game_set, mob_t *mobs);

#endif /* !DESTROY_H_ */