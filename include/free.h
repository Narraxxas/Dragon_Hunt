/*
** EPITECH PROJECT, 2019
** free
** File description:
** header file
*/

#ifndef FREE_H_
#define FREE_H_

#include "game.h"

void free_gs(gamelmt_t *game_set);
void free_mb(mob_t *mobs);
void freezer(global_t *data, bg_t *bg, gamelmt_t *game_set, mob_t *mobs);
void free_bck(bg_t *bg);

#endif /* !FREE_H_ */