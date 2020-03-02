/*
** EPITECH PROJECT, 2019
** animate drake 2
** File description:
** file to animate drake 2
*/

#include "game.h"

void drake_kill2(global_t *data, mob_t *mobs)
{
    if (sfFloatRect_contains(&mobs->drake2->position,
    data->mouse.x, data->mouse.y) == sfTrue
    && sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {
        data->baku = 1;
        data->score = data->score + 1;
        if (mobs->drake2->speed < 200)
            mobs->drake2->speed *= 1.02;
        mobs->drake2->move.x = 2120;
        mobs->drake2->move.y = rand()%600;
        *mobs->wh = rand()%2;
    }
}

void reinit_drake2(global_t *data, mob_t *mobs)
{
    if (mobs->drake2->move.x <= -200) {
        data->life_point = data->life_point - 1;
        mobs->drake2->move.x = 2320;
        mobs->drake2->move.y = rand()%600;
        *mobs->wh = rand()%2;
        data->score -= 5;
    }
}

void move_drake2(mob_t *mobs)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(mobs->drake2->clock))
    >= 200 - mobs->drake2->speed / 2) {
        sfSprite_setTextureRect(mobs->drake2->sprite, mobs->drake2->rectangle);
        move_left_rect(&mobs->drake2->rectangle, 0, 618, 3);
        mobs->drake2->move.x = mobs->drake2->move.x - mobs->drake2->speed;
        sfClock_restart(mobs->drake2->clock);
    }
}

void display_mobs2(global_t *data, mob_t *mobs)
{
        mobs->drake2->position = sfSprite_getGlobalBounds(mobs->drake2->sprite);
        sfSprite_setPosition(mobs->drake2->sprite, mobs->drake2->move);
        move_drake2(mobs);
        reinit_drake2(data, mobs);
        drake_kill2(data, mobs);
        sfRenderWindow_drawSprite(data->window, mobs->drake2->sprite, NULL);
}