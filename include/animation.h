/*
** EPITECH PROJECT, 2019
** animation
** File description:
** header file for animation
*/

#ifndef ANIMATION_H_
#define ANIMATION_H_

void display_cursor(global_t *data, bck_t *cursor);
void move_left_rect(sfIntRect *rect, int offset, int max_value, int nb_frame);
void display_mobs(global_t *data, mob_t *mobs);
void restart(global_t *data, mob_t *mobs);
void bakulek(global_t *data, mob_t *mobs);
void reinit_drake(global_t *data, mob_t *mobs);
void drake_kill(global_t *data, mob_t *mobs);

#endif /* !ANIMATION_H_ */