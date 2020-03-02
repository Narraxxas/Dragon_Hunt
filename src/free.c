/*
** EPITECH PROJECT, 2019
** free
** File description:
** file
*/

#include "game.h"

void free_bck(bg_t *bg)
{
    free (bg->castle);
    free (bg->clouds);
    free (bg->fix_bck);
    free (bg->ground);
    free (bg->life);
    free (bg->txt);
    free (bg->level);
    free (bg);
}

void free_gs(gamelmt_t *game_set)
{
    free (game_set->cursor);
    free (game_set);
}

void free_mb(mob_t *mobs)
{
    free (mobs->wh);
    free (mobs->drake);
    free (mobs->drake2);
    free (mobs->explo);
    free (mobs->restart);
    free (mobs);
}

void freezer(global_t *data, bg_t *bg, gamelmt_t *game_set, mob_t *mobs)
{
    free_bck(bg);
    free_gs(game_set);
    free_mb(mobs);
    free (data);
}