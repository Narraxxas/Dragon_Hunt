/*
** EPITECH PROJECT, 2019
** Struct header
** File description:
** create structs and prototypes of initialise func
*/

#ifndef STUCT_H_
#define STUCT_H_

#include <SFML/Graphics.h>
#include <SFML/Audio/Export.h>
#include <SFML/Audio/SoundStatus.h>
#include <SFML/Audio/Types.h>

typedef struct global_s {
    sfRenderWindow *window;
    sfClock *clock;
    sfTime time;
    sfEvent event;
    sfVector2i mouse;
    sfFloatRect back;
    int score;
    int baku;
    int start;
    int wh_lvl;
    int life_point;
}global_t;


typedef struct bck {
    sfSprite *sprite;
    sfIntRect rectangle;
    sfVector2f move;
    sfTexture *texture;
}bck_t;

typedef struct clouds {
    sfSprite *sprite;
    sfIntRect rectangle;
    sfVector2f move;
    sfTexture *texture;
}clouds_t;

typedef struct ground {
    sfSprite *sprite;
    sfIntRect rectangle;
    sfVector2f move;
    sfTexture *texture;
}ground_t;

typedef struct life_s {
    sfSprite *sprite;
    sfVector2f move;
    sfIntRect rectangle;
    sfTexture *texture;
}life_t;

typedef struct cursor_s {
    sfSprite *sprite;
    sfIntRect rectangle;
    sfVector2f move;
    sfTexture *texture;
}cursor_t;

typedef struct sound_s {
    sfMusic *music;
}sound_t;

typedef struct gamelmt_s {
    cursor_t *cursor;
    sound_t *sound;
}gamelmt_t;

typedef struct star_s {
    sfSprite *sprite;
    sfIntRect rectangle;
    sfVector2f move;
    sfTexture *texture;
    sfFloatRect reset;
    sfFloatRect exit;
}star_t;

typedef struct stars_s {
    star_t *one_star;
    star_t *two_star;
    star_t *three_star;
}stars_t;

typedef struct drake_s {
    sfSprite *sprite;
    sfIntRect rectangle;
    sfFloatRect position;
    sfVector2f move;
    sfTexture *texture;
    sfClock *clock;
    int killed;
    float speed;
}drake_t;

typedef struct level_s {
    sfSprite *sprite;
    sfIntRect rectangle;
    sfFloatRect level1;
    sfFloatRect level2;
    sfFloatRect level3;
    sfFloatRect level4;
    sfFloatRect level5;
    sfFloatRect level6;
    sfVector2f move;
    sfTexture *texture;
    sfClock *clock;
}level_t;

typedef struct bakulek_s {
    sfSprite *sprite;
    sfIntRect rectangle;
    sfFloatRect position;
    sfVector2f move;
    sfTexture *texture;
    sfClock *clock;
}bakulek_t;

typedef struct restart_s {
    stars_t *stars;
    sfSprite *sprite;
    sfIntRect rectangle;
    sfFloatRect reset;
    sfFloatRect exit;
    sfVector2f move;
    sfTexture *texture;
    sfClock *clock;
}restart_t;

typedef struct mob_s {
    drake_t *drake;
    drake_t *drake2;
    restart_t *restart;
    bakulek_t *explo;
    int rotate;
    int *wh;
}mob_t;

typedef struct text_s {
    sfFont *font;
    sfText *text;
}text_t;

typedef struct bg_s {
    bck_t *fix_bck;
    level_t *level;
    bck_t *castle;
    bck_t *home;
    clouds_t *clouds;
    ground_t *ground;
    life_t *life;
    text_t *txt;
}bg_t;

void init(global_t *data, bg_t *bg, gamelmt_t *game_set, mob_t *mobs);
void init_fix_bck(global_t *data, bg_t *bg, gamelmt_t *game_set, mob_t *mobs);
void init_moving_bck(bg_t *bg);
void init_glob_struct(global_t **data);
void init_fix_s(bck_t **s, sfVector2f pos, sfIntRect rect, char *path);
void init_ground_s(ground_t **s, sfVector2f pos, sfIntRect rect, char *path);
void init_drake_s(drake_t **s, sfVector2f pos, sfIntRect rect, char *path);
void init_star_s(star_t **s, sfVector2f pos, sfIntRect rect, char *path);
void init_life_s(life_t **s, sfVector2f pos, sfIntRect rect, char *path);
void init_restart_s(restart_t **s, sfVector2f pos, sfIntRect rect, char *path);
void init_clouds_s(clouds_t **s, sfVector2f pos, sfIntRect rect, char *path);
void init_txt_s(text_t **s, char *path);
void init_level_s(level_t **s, sfVector2f pos, sfIntRect rect, char *path);
void init_music(sound_t **s, char *path);
void init_bakulek(bakulek_t **s, sfVector2f pos, sfIntRect rect, char *path);
void init_fix_sprite(bck_t **, sfVector2f pos, sfIntRect rect, char *path);
void init_clouds_s(clouds_t **, sfVector2f pos, sfIntRect rect, char *path);

#endif /* !STUCT_H_ */