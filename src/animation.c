/*
** EPITECH PROJECT, 2019
** animation
** File description:
** manage sprite animation
*/

#include "game.h"

void move_drake(mob_t *mobs)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(mobs->drake->clock))
    >= 200 - mobs->drake->speed / 2) {
        sfSprite_setTextureRect(mobs->drake->sprite, mobs->drake->rectangle);
        move_left_rect(&mobs->drake->rectangle, 0, 618, 3);
        mobs->drake->move.x = mobs->drake->move.x + mobs->drake->speed;
        sfClock_restart(mobs->drake->clock);
    }
}

void restart(global_t *data, mob_t *mobs)
{
    sfRenderWindow_drawSprite(data->window, mobs->restart->sprite, NULL);
    mobs->restart->reset = rect_f(760, 995, 139, 158);
    if (sfFloatRect_contains(&mobs->restart->reset,
    data->mouse.x, data->mouse.y) == sfTrue
    && sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {
        data->score = 0;
        data->life_point = 3;
        mobs->drake->speed = 50;
        mobs->drake2->speed = 50;
    }
    mobs->restart->exit = rect_f(756, 759, 139, 158);
    if (sfFloatRect_contains(&mobs->restart->exit,
    data->mouse.x, data->mouse.y) == sfTrue
    && sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {
        data->wh_lvl = 0;
    }
}

void display_mobs(global_t *data, mob_t *mobs)
{
    mobs->drake->position = sfSprite_getGlobalBounds(mobs->drake->sprite);
    sfSprite_setPosition(mobs->drake->sprite, mobs->drake->move);
    move_drake(mobs);
    reinit_drake(data, mobs);
    drake_kill(data, mobs);
    sfRenderWindow_drawSprite(data->window, mobs->drake->sprite, NULL);
}

void drake_kill(global_t *data, mob_t *mobs)
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
        *mobs->wh = rand()%2;
    }
}