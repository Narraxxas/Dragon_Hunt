/*
** EPITECH PROJECT, 2019
** window file
** File description:
** all the functions use for the window
*/

#include "game.h"

void game_loop(global_t *data, bg_t *bg, mob_t *mobs, gamelmt_t *game_set)
{
    sfIntRect start_button = rect(915, 1635, 205, 90);

    while (sfRenderWindow_isOpen(data->window)) {
        sfRenderWindow_clear(data->window, sfBlack);
        sfRenderWindow_drawSprite(data->window, bg->home->sprite, NULL);
        if (sfIntRect_contains(&start_button, data->mouse.x,
        data->mouse.y) == sfTrue
        && sfMouse_isButtonPressed(sfMouseLeft) == sfTrue)
            data->start = 1;
        if (data->start == 1)
            display_level(data, bg, mobs);
        bakulek(data, mobs);
        display_cursor(data, (bck_t *)game_set->cursor);
        analyse_events(data, mobs);
        sfRenderWindow_display(data->window);
        escape(data, mobs);
    }
}

void display_bck(global_t *data, bg_t *bg, mob_t *mobs)
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
    life_point_management(data, bg, mobs);
}