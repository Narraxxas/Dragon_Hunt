/*
** EPITECH PROJECT, 2019
** leveling
** File description:
** header file
*/

#ifndef LEVELING_H_
#define LEVELING_H_

#include "game.h"

void one_star(global_t *data, mob_t *mobs);
void two_star(global_t *data, mob_t *mobs);
void three_star(global_t *data, mob_t *mobs);
void life_display(global_t *data, bg_t *bg);
void life_point_management(global_t *data, bg_t *bg, mob_t *mobs);

#endif /* !LEVELING_H_ */
