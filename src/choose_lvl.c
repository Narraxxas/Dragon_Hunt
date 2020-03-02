/*
** EPITECH PROJECT, 2019
** choose lvl
** File description:
** file
*/

#include "game.h"

void ch_level1(global_t *data, bg_t *bg)
{
    if (sfFloatRect_contains(&bg->level->level1,
    data->mouse.x, data->mouse.y) == sfTrue
    && sfMouse_isButtonPressed(sfMouseLeft) == sfTrue)
        data->wh_lvl = 1;
}

void ch_level2(global_t *data, bg_t *bg)
{
    if (sfFloatRect_contains(&bg->level->level2,
    data->mouse.x, data->mouse.y) == sfTrue
    && sfMouse_isButtonPressed(sfMouseLeft) == sfTrue)
        data->wh_lvl = 2;
}

void ch_level3(global_t *data, bg_t *bg)
{
    if (sfFloatRect_contains(&bg->level->level3,
    data->mouse.x, data->mouse.y) == sfTrue
    && sfMouse_isButtonPressed(sfMouseLeft) == sfTrue)
        data->wh_lvl = 3;
}

void ch_level4(global_t *data, bg_t *bg)
{
    if (sfFloatRect_contains(&bg->level->level4,
    data->mouse.x, data->mouse.y) == sfTrue
    && sfMouse_isButtonPressed(sfMouseLeft) == sfTrue)
        data->wh_lvl = 4;
}

void ch_level5(global_t *data, bg_t *bg)
{
    if (sfFloatRect_contains(&bg->level->level5,
    data->mouse.x, data->mouse.y) == sfTrue
    && sfMouse_isButtonPressed(sfMouseLeft) == sfTrue)
        data->wh_lvl = 5;
}