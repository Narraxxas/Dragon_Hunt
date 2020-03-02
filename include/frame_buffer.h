/*
** EPITECH PROJECT, 2019
** frame buffer
** File description:
** create a pixel
*/

#ifndef FRAMEBUFFER_H_
#define FRAMEBUFFER_H_

#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/Graphics/RenderWindow.h>
#include "my.h"

typedef struct framebuffer {
    unsigned int width;
    unsigned int height;
    sfUint8 pixels;
}framebuffer_t;

framebuffer_t *framebuffer_create(unsigned int width, unsigned int height);
void framebuffer_destroy(framebuffer_t *framebuffer);

#endif /* !FRAMEBUFFER_H_ */