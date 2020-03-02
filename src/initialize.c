/*
** EPITECH PROJECT, 2019
** init_struct
** File description:
** init struct functions
*/

#include "game.h"

void init_restart_s(restart_t **s, sfVector2f pos, sfIntRect rect, char *path)
{
    (*s)->move = pos;
    (*s)->rectangle = rect;
    (*s)->sprite = sfSprite_create();
    (*s)->texture = sfTexture_createFromFile(path, NULL);
    sfSprite_setTexture((*s)->sprite, (*s)->texture, sfTrue);
    sfSprite_setTextureRect((*s)->sprite, (*s)->rectangle);
}

void init_life_s(life_t **s, sfVector2f pos, sfIntRect rect, char *path)
{
    (*s)->move = pos;
    (*s)->rectangle = rect;
    (*s)->sprite = sfSprite_create();
    (*s)->texture = sfTexture_createFromFile(path, NULL);
    sfSprite_setTexture((*s)->sprite, (*s)->texture, sfTrue);
    sfSprite_setTextureRect((*s)->sprite, (*s)->rectangle);
    sfSprite_setPosition((*s)->sprite, v2f(40, 40));
}

void init_star_s(star_t **s, sfVector2f pos, sfIntRect rect, char *path)
{
    (*s)->move = pos;
    (*s)->rectangle = rect;
    (*s)->sprite = sfSprite_create();
    (*s)->texture = sfTexture_createFromFile(path, NULL);
    sfSprite_setTexture((*s)->sprite, (*s)->texture, sfTrue);
    sfSprite_setTextureRect((*s)->sprite, (*s)->rectangle);
}

void init_moving_bck(bg_t *bg)
{
    bg->fix_bck = malloc(sizeof(bck_t));
    bg->clouds = malloc(sizeof(clouds_t));
    bg->castle = malloc(sizeof(bck_t));
    bg->ground = malloc(sizeof(ground_t));
    init_clouds_s(&bg->clouds, v2f(0, 0), rect(0, 0, 1920, 1080),
    "assets/clouds.png");
    init_ground_s(&bg->ground, v2f(0, 0), rect(0, 0, 1920, 1080),
    "assets/moving_ground.png");
}

void init(global_t *data, bg_t *bg, gamelmt_t *game_set, mob_t *mobs)
{
    bg->life = malloc(sizeof(life_t));
    bg->level = malloc(sizeof(level_t));
    bg->txt = malloc(sizeof(text_t));
    bg->home = malloc(sizeof(bck_t));
    game_set->cursor = malloc(sizeof(cursor_t));
    game_set->sound = malloc(sizeof(sound_t));
    mobs->drake = malloc(sizeof(drake_t));
    mobs->drake2 = malloc(sizeof(drake_t));
    mobs->restart = malloc(sizeof(restart_t));
    mobs->restart->stars = malloc(sizeof(stars_t));
    mobs->restart->stars->one_star = malloc(sizeof(star_t));
    mobs->restart->stars->two_star = malloc(sizeof(star_t));
    mobs->restart->stars->three_star = malloc(sizeof(star_t));
    mobs->explo = malloc(sizeof(bakulek_t));
    mobs->wh = malloc(sizeof(int *));
    *mobs->wh = rand()%2;
    mobs->rotate = rand()%10 - 5;
    init_moving_bck(bg);
    init_fix_bck(data, bg, game_set, mobs);
}