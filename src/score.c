/*
** EPITECH PROJECT, 2019
** score
** File description:
** score file
*/

#include "game.h"

int my_intlen(int nb)
{
    int i = 0;
    int nbr = nb;

    while (nbr != 0) {
        nbr = nbr / 10;
        i = i + 1;
    }
    return (i);
}

char *int_to_str(int nb)
{
    char *str = malloc(sizeof(char) * (my_intlen(nb) + 2));
    int i = 0;
    int div = (int)my_pow((unsigned int)10, (unsigned int)my_intlen(nb)) / 10;

    if (nb == 0)
        return ("0\0");
    if (nb < 0) {
        str[i] = '-';
        nb = nb * (-1);
        i = i + 1;
    }
    while (div > 0) {
        str[i] = nb / div + 48;
        nb = nb % div;
        i = i + 1;
        div = div / 10;
    }
    str[i] = 0;
    return (str);
}

void disp_score(global_t *data, bg_t *bg)
{
    char *str = my_strdup(int_to_str(data->score));
    sfText_setString(bg->txt->text, str);
    sfRenderWindow_drawText(data->window, bg->txt->text, NULL);
}