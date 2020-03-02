/*
** EPITECH PROJECT, 2019
** game
** File description:
** game prototype
*/

#ifndef GAME_H_
#define GAME_H_

#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <SFML/System.h>
#include "my.h"
#include "window_management.h"
#include "set_windows_parameters.h"
#include "set_sprites_parameters.h"
#include "animation_drake_2.h"
#include "leveling.h"
#include "level.h"
#include "animation.h"
#include "free.h"
#include "event.h"
#include "struct.h"
#include "level_management.h"
#include "choose_lvl.h"
#define WINDOW_SET sfRenderWindow_create(set_video_mode(1920, 1080, 32), \
        "Castle Defense", sfDefaultStyle, NULL)

#endif /* !GAME_H_ */