/*
** EPITECH PROJECT, 2019
** animation 2
** File description:
** file
*/

#include "game.h"

void move_left_rect(sfIntRect *rect, int offset, int max_value, int nb_frame)
{
    if (rect->left >= max_value)
        rect->left = offset;
    else
        rect->left = rect->left + (max_value / (nb_frame - 1));
}

void display_cursor(global_t *data, bck_t *cursor)
{
    if (sfTime_asMicroseconds(sfClock_getElapsedTime(data->clock)) > 1) {
        data->mouse = sfMouse_getPositionRenderWindow(data->window);
        sfRenderWindow_setMouseCursorVisible(data->window, sfFalse);
        sfSprite_setPosition(cursor->sprite,
        v2f(data->mouse.x - 32, data->mouse.y - 32));
        sfRenderWindow_drawSprite(data->window, cursor->sprite, NULL);
    }
}

void reinit_drake(global_t *data, mob_t *mobs)
{
    if (mobs->drake->move.x >= 2220) {
        data->life_point = data->life_point - 1;
        mobs->drake->move.x = -400;
        mobs->drake->move.y = rand()%600;
        *mobs->wh = rand()%2;
        data->score -= 5;
    }
}

void bakulek2(mob_t *mobs)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(mobs->explo->clock))
    >= 80) {
        mobs->explo->rectangle.left += 433;
        sfClock_restart(mobs->explo->clock);
    }
}

void bakulek(global_t *data, mob_t *mobs)
{
    if (data->baku == 1) {
        bakulek2(mobs);
        if (mobs->explo->rectangle.top >= 720
        && mobs->explo->rectangle.left >= 866) {
            data->baku = 0;
            mobs->explo->rectangle.left = 0;
            mobs->explo->rectangle.top = 0;
        }
        if (mobs->explo->rectangle.left >= 866) {
        mobs->explo->rectangle.left = 0;
        mobs->explo->rectangle.top += 360;
        }
        sfSprite_setTextureRect(mobs->explo->sprite, mobs->explo->rectangle);
        data->mouse = sfMouse_getPositionRenderWindow(data->window);
        sfSprite_setPosition(mobs->explo->sprite,
        v2f(data->mouse.x - 216, data->mouse.y - 180));
        sfRenderWindow_drawSprite(data->window, mobs->explo->sprite, NULL);
    }
}