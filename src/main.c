/*
** EPITECH PROJECT, 2019
** main src
** File description:
** entry of binary
*/

#include "game.h"

void helper(void)
{
    my_printf("Defense Castle :\n\n\t"\
    "Defense Castle is fantasy game where you heroes \n\t"\
    "must defend your castle against the horrible drakes. \n\t"\
    "Take up arms and reduce the evil to nothing !\n\t"\
    "Each drake make 1 or 2 points\n\t"
    "(for that just click on the dragons)\n\n");
}

int main(int ac, char **av)
{
    global_t *data = malloc(sizeof(global_t));
    bg_t *bg = malloc(sizeof(bg_t));
    gamelmt_t *game_set = malloc(sizeof(gamelmt_t));
    mob_t *mobs = malloc(sizeof(mob_t));

    if (ac == 2 && my_strcmp(av[1], "-h") == 0)
        helper();
    else if (ac == 1) {
        init(data, bg, game_set, mobs);
        sfMusic_play(game_set->sound->music);
        sfRenderWindow_setFramerateLimit(data->window, 60);
        game_loop(data, bg, mobs, game_set);
        destroyer(data, bg, game_set, mobs);
    }
    return (EXIT_SUCCESS);
}