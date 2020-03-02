/*
** EPITECH PROJECT, 2019
** windows parameters
** File description:
** header file for parameters
*/

#ifndef PARAMETERS_H_
#define PARAMETERS_H_

#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/Graphics/RenderWindow.h>
#include "my.h"

sfColor set_color(int red, int green, int blue, int opacity);
sfVideoMode set_video_mode(int width, int height, int BpP);

#endif /* !PARAMETERS_H_ */