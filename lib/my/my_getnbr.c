/*
** EPITECH PROJECT, 2019
** my_getnbr
** File description:
** return a  number  sent as a string
*/

#include <limits.h>
#include <unistd.h>
#include "my.h"

int my_getnbr(char *str)
{
    int nbr = 0;
    int i = 0;
    int nbr_neg = 1;

    while (my_char_isnum(str[i]) != 0)
        i = i + 1;
    if (str[i - 1] == '-')
        nbr_neg = -1;
    while (str[i] != 0 && my_char_isnum(str[i]) == 0) {
        if (nbr > INT_MAX) {
            write (2, "error : the number is too long (INTMAX)\n", 41);
            return (84);
        }
        nbr = (nbr + str[i] - 48) * 10;
        i = i + 1;
    }
    nbr = nbr / 10 * nbr_neg;
    return (nbr);
}