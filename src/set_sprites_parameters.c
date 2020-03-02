/*
** EPITECH PROJECT, 2019
** sprite parameters
** File description:
** set sprites parameters
*/

#include "game.h"

sfTime set_time(sfInt64 time)
{
    sfTime returned_value;

    returned_value.microseconds = time;
    return (returned_value);
}

sfVector2f v2f(int x, int y)
{
    sfVector2f vect;

    vect.x = x;
    vect.y = y;
    return (vect);
}

sfVector2u set_texture(unsigned int width, unsigned int height)
{
    sfVector2u texture;

    texture.x = width;
    texture.y = height;
    return (texture);
}

sfIntRect rect(int top, int left, int width, int height)
{
    sfIntRect rect;

    rect.top = top;
    rect.left = left;
    rect.width = width;
    rect.height = height;
    return (rect);
}

sfFloatRect rect_f(float top, float left, float width, float height)
{
    sfFloatRect rect;

    rect.top = top;
    rect.left = left;
    rect.width = width;
    rect.height = height;
    return (rect);
}