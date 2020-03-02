/*
** EPITECH PROJECT, 2019
** sprite parameters
** File description:
** header file to set sprites parameters
*/

#ifndef SPRITE_PARAM_H_
#define SPRITE_PARAM_H_

sfIntRect rect(int top, int left, int width, int height);
sfFloatRect rect_f(float top, float left, float width, float height);
sfVector2u set_texture(unsigned int width, unsigned int height);
sfFloatRect rect_f(float top, float left, float width, float height);
sfVector2f v2f(int x, int y);
sfTime set_time(sfInt64 time);

#endif /* !SPRITE_PARAM_H_ */