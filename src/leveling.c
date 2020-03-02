/*
** EPITECH PROJECT, 2019
** leveling
** File description:
** file
*/

#include "game.h"

void life_display(global_t *data, bg_t *bg)
{
    int width = 0;

    switch (data->life_point) {
    case 1:
        width = 70;
        break;
    case 2:
        width = 140;
        break;
    case 3:
        width = 210;
        break;
    default:
        break;
    }
    sfSprite_setTextureRect(bg->life->sprite, rect(0, 0, width, 64));
    sfRenderWindow_drawSprite(data->window, bg->life->sprite, NULL);
}

void one_star(global_t *data, mob_t *mobs)
{
    sfRenderWindow_drawSprite(data->window,
    mobs->restart->stars->one_star->sprite, NULL);
    mobs->restart->stars->one_star->reset = rect_f(760, 995, 139, 158);
    if (sfFloatRect_contains(&mobs->restart->stars->one_star->reset,
    data->mouse.x, data->mouse.y) == sfTrue
    && sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {
        data->score = 0;
        data->life_point = 3;
        mobs->drake->speed = 65;
    }
    mobs->restart->stars->one_star->exit = rect_f(756, 759, 139, 158);
    if (sfFloatRect_contains(&mobs->restart->stars->one_star->exit,
    data->mouse.x, data->mouse.y) == sfTrue
    && sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {
        data->score = 0;
        data->life_point = 3;
        mobs->drake->speed = 65;
        data->wh_lvl = 0;
    }
}

void two_star(global_t *data, mob_t *mobs)
{
    sfRenderWindow_drawSprite(data->window,
    mobs->restart->stars->two_star->sprite, NULL);
    mobs->restart->stars->two_star->reset = rect_f(760, 995, 139, 158);
    if (sfFloatRect_contains(&mobs->restart->stars->two_star->reset,
    data->mouse.x, data->mouse.y) == sfTrue
    && sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {
        data->score = 0;
        data->life_point = 3;
        mobs->drake->speed = 65;
        mobs->drake2->speed = 65;
    }
    mobs->restart->stars->two_star->exit = rect_f(756, 759, 139, 158);
    if (sfFloatRect_contains(&mobs->restart->stars->two_star->exit,
    data->mouse.x, data->mouse.y) == sfTrue
    && sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {
        data->score = 0;
        data->life_point = 3;
        mobs->drake->speed = 65;
        mobs->drake2->speed = 65;
        data->wh_lvl = 0;
    }
}

void three_star(global_t *data, mob_t *mobs)
{
    sfRenderWindow_drawSprite(data->window,
    mobs->restart->stars->three_star->sprite, NULL);
    mobs->restart->stars->three_star->reset = rect_f(760, 995, 139, 158);
    if (sfFloatRect_contains(&mobs->restart->stars->three_star->reset,
    data->mouse.x, data->mouse.y) == sfTrue
    && sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {
        data->score = 0;
        data->life_point = 3;
        mobs->drake->speed = 65;
        mobs->drake2->speed = 65;
    }
    mobs->restart->stars->three_star->exit = rect_f(756, 759, 139, 158);
    if (sfFloatRect_contains(&mobs->restart->stars->three_star->exit,
    data->mouse.x, data->mouse.y) == sfTrue
    && sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {
        data->score = 0;
        data->life_point = 3;
        mobs->drake->speed = 65;
        mobs->drake2->speed = 65;
        data->wh_lvl = 0;
    }
}

void life_point_management(global_t *data, bg_t *bg, mob_t *mobs)
{
    if (data->score < 20)
        display_mobs(data, mobs);
    sfRenderWindow_drawSprite(data->window, bg->ground->sprite, NULL);
    if (data->score >= 20) {
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