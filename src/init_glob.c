/*
** EPITECH PROJECT, 2019
** init_glob
** File description:
** file
*/

#include "game.h"

void init_glob_struct(global_t **data)
{
    (*data)->window = WINDOW_SET;
    (*data)->clock = sfClock_create();
    (*data)->back = rect_f(153, 1596, 84, 84);
    (*data)->start = 0;
    (*data)->score = 0;
    (*data)->baku = 0;
    (*data)->life_point = 3;
    (*data)->wh_lvl = 0;
}

void init_fix_s(bck_t **s, sfVector2f pos, sfIntRect rect, char *path)
{
    (*s)->move = pos;
    (*s)->rectangle = rect;
    (*s)->sprite = sfSprite_create();
    (*s)->texture = sfTexture_createFromFile(path, NULL);
    sfSprite_setTexture((*s)->sprite, (*s)->texture, sfTrue);
    sfSprite_setTextureRect((*s)->sprite, (*s)->rectangle);
}

void init_clouds_s(clouds_t **s, sfVector2f pos, sfIntRect rect, char *path)
{
    (*s)->move = pos;
    (*s)->rectangle = rect;
    (*s)->sprite = sfSprite_create();
    (*s)->texture = sfTexture_createFromFile(path, NULL);
    sfSprite_setTexture((*s)->sprite, (*s)->texture, sfTrue);
    sfSprite_setTextureRect((*s)->sprite, (*s)->rectangle);
    sfTexture_setRepeated((*s)->texture, sfTrue);
}

void init_ground_s(ground_t **s, sfVector2f pos, sfIntRect rect, char *path)
{
    (*s)->move = pos;
    (*s)->rectangle = rect;
    (*s)->sprite = sfSprite_create();
    (*s)->texture = sfTexture_createFromFile(path, NULL);
    sfSprite_setTexture((*s)->sprite, (*s)->texture, sfTrue);
    sfSprite_setTextureRect((*s)->sprite, (*s)->rectangle);
    sfTexture_setRepeated((*s)->texture, sfTrue);
}

void init_drake_s(drake_t **s, sfVector2f pos, sfIntRect rect, char *path)
{
    (*s)->move = pos;
    (*s)->clock = sfClock_create();
    (*s)->rectangle = rect;
    (*s)->sprite = sfSprite_create();
    (*s)->texture = sfTexture_createFromFile(path, NULL);
    (*s)->killed = 0;
    (*s)->speed = 65;
    (*s)->position = (sfFloatRect){-400, 0, 0, 0};
    sfSprite_setTexture((*s)->sprite, (*s)->texture, sfTrue);
    sfSprite_setTextureRect((*s)->sprite, (*s)->rectangle);
}