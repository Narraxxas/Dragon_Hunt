/*
** EPITECH PROJECT, 2019
** level management
** File description:
** file
*/

#include "game.h"

void choose_level(global_t *data, bg_t *bg)
{
    ch_level1(data, bg);
    ch_level2(data, bg);
    ch_level3(data, bg);
    ch_level4(data, bg);
    ch_level5(data, bg);
    if (sfFloatRect_contains(&bg->level->level6,
    data->mouse.x, data->mouse.y) == sfTrue
    && sfMouse_isButtonPressed(sfMouseLeft) == sfTrue)
        data->wh_lvl = 6;
    else if (sfFloatRect_contains(&data->back,
    data->mouse.x, data->mouse.y) == sfTrue
    && sfMouse_isButtonPressed(sfMouseLeft) == sfTrue)
        data->start = 0;
}

void display_level_management(global_t *data, bg_t *bg)
{
    sfRenderWindow_drawSprite(data->window, bg->fix_bck->sprite, NULL);
    sfRenderWindow_drawSprite(data->window, bg->clouds->sprite, NULL);
    sfRenderWindow_drawSprite(data->window, bg->castle->sprite, NULL);
    sfRenderWindow_drawSprite(data->window, bg->ground->sprite, NULL);
    sfRenderWindow_drawSprite(data->window, bg->level->sprite, NULL);
}

void display_level_2(global_t *data, bg_t *bg, mob_t *mobs)
{
    switch (data->wh_lvl) {
        case 5:
            level5(data, bg, mobs);
            break;
        case 6:
            level6(data, bg, mobs);
            break;
        default :
            choose_level(data, bg);
            display_level_management(data, bg);
            break;
    }
}

void display_level(global_t *data, bg_t *bg, mob_t *mobs)
{
    data->mouse = sfMouse_getPositionRenderWindow(data->window);
    switch (data->wh_lvl) {
        case 1 :
            level1(data, bg, mobs);
            break;
        case 2:
            level2(data, bg, mobs);
            break;
        case 3:
            level3(data, bg, mobs);
            break;
        case 4:
            level4(data, bg, mobs);
            break;
        default :
            display_level_2(data, bg, mobs);
            break;
    }
}