/*
** EPITECH PROJECT, 2019
** parameters
** File description:
** set window parameters
*/

#include "game.h"

sfVideoMode set_video_mode(int width, int height, int BpP)
{
    sfVideoMode video_mode;

    video_mode.width = width;
    video_mode.height = height;
    video_mode.bitsPerPixel = BpP;

    return (video_mode);
}

sfColor set_color(int red, int green, int blue, int opacity)
{
    sfColor color;

    color.a = opacity;
    color.r = red;
    color.g = green;
    color.b = blue;

    return (color);
}