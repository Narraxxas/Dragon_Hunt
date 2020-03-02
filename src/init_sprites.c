/*
** EPITECH PROJECT, 2019
** init file
** File description:
** file
*/

#include "game.h"

void init_txt_s(text_t **s, char *path)
{
    (*s)->font = sfFont_createFromFile(path);
    (*s)->text = sfText_create();
    sfText_setFont((*s)->text, (*s)->font);
    sfText_setCharacterSize((*s)->text, 100);
    sfText_setPosition((*s)->text, v2f(1740, 30));
}

void init_level_s(level_t **s, sfVector2f pos, sfIntRect rect, char *path)
{
    (*s)->move = pos;
    (*s)->rectangle = rect;
    (*s)->sprite = sfSprite_create();
    (*s)->texture = sfTexture_createFromFile(path, NULL);
    (*s)->level1 = rect_f(264, 474, 262, 273);
    (*s)->level2 = rect_f(264, 861, 262, 273);
    (*s)->level3 = rect_f(264, 1236, 262, 273);
    (*s)->level4 = rect_f(567, 474, 262, 273);
    (*s)->level5 = rect_f(567, 861, 262, 273);
    (*s)->level6 = rect_f(567, 1236, 262, 273);
    sfSprite_setTexture((*s)->sprite, (*s)->texture, sfTrue);
    sfSprite_setTextureRect((*s)->sprite, (*s)->rectangle);
}

void init_bakulek(bakulek_t **s, sfVector2f pos, sfIntRect rect, char *path)
{
    (*s)->move = pos;
    (*s)->rectangle = rect;
    (*s)->sprite = sfSprite_create();
    (*s)->texture = sfTexture_createFromFile(path, NULL);
    (*s)->clock = sfClock_create();
    sfSprite_setTexture((*s)->sprite, (*s)->texture, sfTrue);
    sfSprite_setTextureRect((*s)->sprite, (*s)->rectangle);
}

void init_fix2(bg_t *bg, gamelmt_t *game_set, mob_t *mobs)
{
    init_restart_s(&(mobs->restart), v2f(0, 0), rect(0, 0, 1920, 1080),
    "assets/loose.png");
    init_star_s(&(mobs->restart->stars->one_star), v2f(0, 0),
    rect(0, 0, 1920, 1080), "assets/1stars.png");
    init_star_s(&(mobs->restart->stars->two_star), v2f(0, 0),
    rect(0, 0, 1920, 1080), "assets/2stars.png");
    init_star_s(&(mobs->restart->stars->three_star), v2f(0, 0),
    rect(0, 0, 1920, 1080), "assets/3stars.png");
    init_bakulek(&(mobs->explo), v2f(0, 0), rect(0, 0, 433, 360),
    "assets/explosion.png");
    init_level_s(&(bg->level), v2f(0, 0), rect(15, 15, 1920, 1080),
    "assets/level-select.png");
    init_txt_s(&(bg->txt), "assets/txt.ttf");
    init_music(&(game_set->sound), "assets/sound.ogg");
}

void init_fix_bck(global_t *data, bg_t *bg, gamelmt_t *game_set, mob_t *mobs)
{
    init_glob_struct(&data);
    init_fix_s(&bg->fix_bck, v2f(0, 0), rect(0, 0, 1920, 1080),
    "assets/fix_bg.png");
    init_fix_s(&bg->castle, v2f(0, 0), rect(0, 0, 1920, 1080),
    "assets/castle.png");
    init_fix_s(&bg->home, v2f(0, 0), rect(0, 0, 1920, 1080),
    "assets/home.png");
    init_life_s(&bg->life, v2f(40, 40), rect(0, 0, 210, 64),
    "assets/full_life.png");
    init_fix_s((bck_t **)&game_set->cursor, v2f(data->mouse.x, data->mouse.y),
    rect(0, 0, 64, 64), "assets/target.png");
    init_drake_s(&(mobs->drake), v2f(-200, rand()%650), rect(0, 0, 309, 211),
    "assets/drake.png");
    init_drake_s(&(mobs->drake2), v2f(2120, rand()%650), rect(0, 0, 309, 211),
    "assets/drake2.png");
    init_fix2(bg, game_set, mobs);
}