/*
** EPITECH PROJECT, 2019
** animate drake 3
** File description:
** drake 3
*/

#include "game.h"

void reinit_drake3(global_t *data, mob_t *mobs)
{
    if (mobs->drake->move.x >= 2220) {
        data->life_point = data->life_point - 1;
        data->score -= 5;
        mobs->drake->move.x = -400;
        mobs->drake->move.y = rand()%600;
        *mobs->wh = rand()%4;
    }
}

void drake_kill3(global_t *data, mob_t *mobs)
{
    if (sfFloatRect_contains(&mobs->drake->position,
    data->mouse.x, data->mouse.y) == sfTrue
    && sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {
        data->baku = 1;
        data->score = data->score + 1;
        if (mobs->drake->speed < 200)
            mobs->drake->speed *= 1.02;
        mobs->drake->move.x = -400;
        mobs->drake->move.y = rand()%600;
        *mobs->wh = rand()%4;
    }
}

void move_drake3(mob_t *mobs)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(mobs->drake->clock))
    >= 200 - mobs->drake->speed / 2) {
        sfSprite_setTextureRect(mobs->drake->sprite, mobs->drake->rectangle);
        move_left_rect(&mobs->drake->rectangle, 0, 618, 3);
        mobs->drake->move.x = mobs->drake->move.x + mobs->drake->speed;
        mobs->drake2->move.y = mobs->drake2->move.y + mobs->rotate;
        sfClock_restart(mobs->drake->clock);
    }
}

void display_mobs3(global_t *data, mob_t *mobs)
{
        mobs->drake->position = sfSprite_getGlobalBounds(mobs->drake->sprite);
        sfSprite_setPosition(mobs->drake->sprite, mobs->drake->move);
        move_drake3(mobs);
        reinit_drake3(data, mobs);
        drake_kill3(data, mobs);
        sfRenderWindow_drawSprite(data->window, mobs->drake->sprite, NULL);
}