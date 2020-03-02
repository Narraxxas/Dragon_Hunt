/*
** EPITECH PROJECT, 2019
** init music
** File description:
** file
*/

#include "game.h"

void init_music(sound_t **s, char *path)
{
    (*s)->music = sfMusic_createFromFile(path);
    sfMusic_setLoop((*s)->music, sfTrue);
}