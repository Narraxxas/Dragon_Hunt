/*
** EPITECH PROJECT, 2019
** Event file
** File description:
** manage events
*/

#include "game.h"

void manage_mouse_click(global_t *data, mob_t *mobs)
{
    int state = 0;
    if (data->event.type == sfEvtMouseButtonPressed)
        state = 1;
    if (data->event.type == sfEvtMouseButtonReleased && state == 1)
        state = 2;
    if (state == 2)
        if (sfTime_asMilliseconds(sfClock_getElapsedTime(mobs->explo->clock))
        >= 1000) {
            bakulek(data, mobs);
            sfClock_restart(mobs->explo->clock);
        }
}

void close_window(global_t *data)
{
    if (data->event.type == sfEvtClosed
    || sfKeyboard_isKeyPressed(sfKeySpace) == sfTrue)
        sfRenderWindow_close(data->window);
}

void analyse_events(global_t *data, mob_t *mobs)
{
    while (sfRenderWindow_pollEvent(data->window, &data->event)) {
        close_window(data);
        manage_mouse_click(data, mobs);
    }
}