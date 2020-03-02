/*
** EPITECH PROJECT, 2019
** levele_management2
** File description:
** file
*/

#include "game.h"

void escape(global_t *data, mob_t *mobs)
{
    if (sfKeyboard_isKeyPressed(sfKeyEscape) == sfTrue) {
        data->wh_lvl = 0;
        data->life_point = 3;
        data->score = 0;
        mobs->drake->move.x = -400;
        mobs->drake->speed = 50;
        mobs->drake2->move.x = 2320;
        mobs->drake2->speed = 50;
    }
}

void level6(global_t *data, bg_t *bg, mob_t *mobs)
{
    display_bck6(data, bg, mobs);
    disp_score(data, bg);
}