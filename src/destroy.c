/*
** EPITECH PROJECT, 2019
** destroy
** File description:
** file
*/

#include "game.h"

void destroy_fixer(global_t *data, gamelmt_t *game_set, mob_t *mobs)
{
    sfClock_destroy(data->clock);
    sfClock_destroy(mobs->drake->clock);
    sfClock_destroy(mobs->drake2->clock);
    sfMusic_destroy(game_set->sound->music);
    sfSprite_destroy(mobs->explo->sprite);
    sfTexture_destroy(mobs->explo->texture);
    sfSprite_destroy(mobs->restart->sprite);
    sfSprite_destroy(mobs->restart->stars->one_star->sprite);
    sfSprite_destroy(mobs->restart->stars->two_star->sprite);
    sfSprite_destroy(mobs->restart->stars->three_star->sprite);
    sfTexture_destroy(mobs->restart->texture);
    sfTexture_destroy(mobs->restart->stars->one_star->texture);
    sfTexture_destroy(mobs->restart->stars->two_star->texture);
    sfTexture_destroy(mobs->restart->stars->three_star->texture);
    sfSprite_destroy(game_set->cursor->sprite);
    sfSprite_destroy(mobs->drake->sprite);
}

void destroyer_fix(global_t *data, bg_t *bg, gamelmt_t *game_set, mob_t *mobs)
{
    destroy_fixer(data, game_set, mobs);
    sfSprite_destroy(mobs->drake2->sprite);
    sfSprite_destroy(bg->life->sprite);
    sfTexture_destroy(bg->life->texture);
    sfText_destroy(bg->txt->text);
    sfSprite_destroy(bg->level->sprite);
    sfTexture_destroy(bg->level->texture);
    sfTexture_destroy(game_set->cursor->texture);
    sfTexture_destroy(mobs->drake->texture);
    sfTexture_destroy(mobs->drake2->texture);
    sfSprite_destroy(bg->fix_bck->sprite);
    sfTexture_destroy(bg->fix_bck->texture);
    sfSprite_destroy(bg->castle->sprite);
    sfTexture_destroy(bg->castle->texture);
    sfRenderWindow_destroy(data->window);
}

void destroyer_moving(bg_t *bg)
{
    sfSprite_destroy(bg->clouds->sprite);
    sfTexture_destroy(bg->clouds->texture);
    sfSprite_destroy(bg->ground->sprite);
    sfTexture_destroy(bg->ground->texture);
}

void destroyer(global_t *data, bg_t *bg, gamelmt_t *game_set, mob_t *mobs)
{
    destroyer_fix(data, bg, game_set, mobs);
    destroyer_moving(bg);
    freezer(data, bg, game_set, mobs);
}