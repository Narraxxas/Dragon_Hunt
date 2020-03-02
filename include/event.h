/*
** EPITECH PROJECT, 2019
** event
** File description:
** header file for events
*/

#ifndef EVENT_H_
#define EVENT_H_

#include <stdio.h>
#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/Graphics/RenderWindow.h>
#include <SFML/System.h>
#include "window_management.h"
#include "set_windows_parameters.h"
#include "set_sprites_parameters.h"
#include "animation.h"
#include "struct.h"

void analyse_events(global_t *data, mob_t *mobs);

#endif /* !EVENT_H_ */