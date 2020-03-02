/*
** EPITECH PROJECT, 2019
** animation drake 2 2
** File description:
** file
*/

#include "game.h"

void life_point_management2(global_t *data, bg_t *bg, mob_t *mobs)
{
    if (data->score < 40 && data->life_point != 0) {
        if (*mobs->wh == 1)
            display_mobs(data, mobs);
        else
            display_mobs2(data, mobs);
    }
    sfRenderWindow_drawSprite(data->window, bg->ground->sprite, NULL);
    if (data->score >= 40) {
        if (data->life_point == 1)
            one_star(data, mobs);
        if (data->life_point == 2)
            two_star(data, mobs);
        if (data->life_point == 3)
            three_star(data, mobs);    }
    else if (data->life_point == 0)
        restart(data, mobs);
    life_display(data, bg);
}

void display_bck2(global_t *data, bg_t *bg, mob_t *mobs)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(data->clock)) >= 20) {
        bg->clouds->rectangle.left += 1;
        bg->ground->rectangle.left += 3;
        sfClock_restart(data->clock);
    }
    sfSprite_setTextureRect(bg->clouds->sprite, bg->clouds->rectangle);
    sfSprite_setTextureRect(bg->ground->sprite, bg->ground->rectangle);
    sfRenderWindow_drawSprite(data->window, bg->fix_bck->sprite, NULL);
    sfRenderWindow_drawSprite(data->window, bg->clouds->sprite, NULL);
    sfRenderWindow_drawSprite(data->window, bg->castle->sprite, NULL);
    life_point_management2(data, bg, mobs);
}

void life_point_management3(global_t *data, bg_t *bg, mob_t *mobs)
{
    if (data->score < 60 && data->life_point != 0) {
        if (*mobs->wh == 1)
            display_mobs(data, mobs);
        else
            display_mobs2(data, mobs);
    }
    sfRenderWindow_drawSprite(data->window, bg->ground->sprite, NULL);
    if (data->score >= 60) {
        if (data->life_point == 1)
            one_star(data, mobs);
        if (data->life_point == 2)
            two_star(data, mobs);
        if (data->life_point == 3)
            three_star(data, mobs);    }
    else if (data->life_point == 0)
        restart(data, mobs);
    life_display(data, bg);
}

void display_bck3(global_t *data, bg_t *bg, mob_t *mobs)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(data->clock)) >= 20) {
        bg->clouds->rectangle.left += 1;
        bg->ground->rectangle.left += 3;
        sfClock_restart(data->clock);
    }
    sfSprite_setTextureRect(bg->clouds->sprite, bg->clouds->rectangle);
    sfSprite_setTextureRect(bg->ground->sprite, bg->ground->rectangle);
    sfRenderWindow_drawSprite(data->window, bg->fix_bck->sprite, NULL);
    sfRenderWindow_drawSprite(data->window, bg->clouds->sprite, NULL);
    sfRenderWindow_drawSprite(data->window, bg->castle->sprite, NULL);
    life_point_management3(data, bg, mobs);
}