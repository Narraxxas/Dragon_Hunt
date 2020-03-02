/*
** EPITECH PROJECT, 2019
** drake 4
** File description:
** animate drake 4 file
*/

#include "game.h"

void drake_kill4(global_t *data, mob_t *mobs)
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
        *mobs->wh = rand()%4;
    }
}

void reinit_drake4(global_t *data, mob_t *mobs)
{
    if (mobs->drake2->move.x <= -200) {
        data->life_point = data->life_point - 1;
        mobs->drake2->move.x = 2320;
        mobs->drake2->move.y = rand()%600;
        data->score = data->score - 5;
        *mobs->wh = rand()%4;
    }
}

void move_drake4(mob_t *mobs)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(mobs->drake2->clock))
    >= 200 - mobs->drake2->speed / 2) {
        sfSprite_setTextureRect(mobs->drake2->sprite, mobs->drake2->rectangle);
        move_left_rect(&mobs->drake2->rectangle, 0, 618, 3);
        mobs->drake2->move.x = mobs->drake2->move.x - mobs->drake2->speed;
        mobs->drake2->move.y = mobs->drake2->move.y + mobs->rotate;
        sfClock_restart(mobs->drake2->clock);
    }
}

void display_mobs4(global_t *data, mob_t *mobs)
{
        mobs->drake2->position = sfSprite_getGlobalBounds(mobs->drake2->sprite);
        sfSprite_setPosition(mobs->drake2->sprite, mobs->drake2->move);
        move_drake4(mobs);
        reinit_drake4(data, mobs);
        drake_kill4(data, mobs);
        sfRenderWindow_drawSprite(data->window, mobs->drake2->sprite, NULL);
}

void life_point_management4(global_t *data, bg_t *bg, mob_t *mobs)
{
    if (data->score < 100 && data->life_point != 0) {
        if (*mobs->wh == 1)
            display_mobs(data, mobs);
        else if (*mobs->wh == 2)
            display_mobs2(data, mobs);
        else if (*mobs->wh == 3)
            display_mobs3(data, mobs);
        else
            display_mobs4(data, mobs);
    }
    sfRenderWindow_drawSprite(data->window, bg->ground->sprite, NULL);
    if (data->score >= 100) {
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