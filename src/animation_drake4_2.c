/*
** EPITECH PROJECT, 2019
** animation drake 4 2
** File description:
** file
*/

#include "game.h"

void display_bck4(global_t *data, bg_t *bg, mob_t *mobs)
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
    life_point_management4(data, bg, mobs);
}

void life_point_management5(global_t *data, bg_t *bg, mob_t *mobs)
{
    if (data->score < 150 && data->life_point != 0) {
        if (*mobs->wh == 1) {
            display_mobs(data, mobs);
            display_mobs2(data, mobs);
        }
        else {
            display_mobs2(data, mobs);
            display_mobs(data, mobs);
        }

    }
    sfRenderWindow_drawSprite(data->window, bg->ground->sprite, NULL);
    if (data->score >= 150) {
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

void display_bck5(global_t *data, bg_t *bg, mob_t *mobs)
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
    life_point_management5(data, bg, mobs);
}

void life_point_management6(global_t *data, bg_t *bg, mob_t *mobs)
{
    if (data->score < 200 && data->life_point != 0) {
        if (*mobs->wh == 1) {
            display_mobs(data, mobs);
            display_mobs2(data, mobs);
        }
        else if (*mobs->wh == 2) {
            display_mobs2(data, mobs);
            display_mobs3(data, mobs);
            display_mobs(data, mobs);
        }
        else if (*mobs->wh == 3) {
            display_mobs2(data, mobs);
            display_mobs3(data, mobs);
            display_mobs4(data, mobs);
        }
        else {
            display_mobs4(data, mobs);
            display_mobs3(data, mobs);
            display_mobs2(data, mobs);
            display_mobs(data, mobs);
        }
    }
    sfRenderWindow_drawSprite(data->window, bg->ground->sprite, NULL);
    if (data->score >= 200) {
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

void display_bck6(global_t *data, bg_t *bg, mob_t *mobs)
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
    life_point_management6(data, bg, mobs);
}