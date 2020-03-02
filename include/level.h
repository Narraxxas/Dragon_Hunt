/*
** EPITECH PROJECT, 2019
** level
** File description:
** header file
*/

#ifndef LEVEL_H_
#define LEVEL_H_

#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/Graphics/RenderWindow.h>
#include "my.h"
#include "window_management.h"
#include "set_windows_parameters.h"
#include "set_sprites_parameters.h"
#include "animation_drake_2.h"
#include "animation.h"
#include "event.h"
#include "score.h"
#include "struct.h"

void level1(global_t *data, bg_t *bg, mob_t *mobs);
void level2(global_t *data, bg_t *bg, mob_t *mobs);
void level3(global_t *data, bg_t *bg, mob_t *mobs);
void level4(global_t *data, bg_t *bg, mob_t *mobs);
void level5(global_t *data, bg_t *bg, mob_t *mobs);
void level6(global_t *data, bg_t *bg, mob_t *mobs);
void escape(global_t *data, mob_t *mobs);

#endif /* !LEVEL_H_ */