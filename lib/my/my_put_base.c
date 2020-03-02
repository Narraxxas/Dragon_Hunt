/*
** EPITECH PROJECT, 2019
** put octal
** File description:
** display the unsigned int given as parameter in octal base
*/

#include <stdio.h>
#include <stdlib.h>
#include "my.h"

void convert_base(unsigned int nb, int base)
{
    int y = 0;
    int i = 0;
    unsigned int res = 0;

    while (((int)nb - (int)my_pow(base, y)) >= 0)
        y = y + 1;
    y = y - 1;
    while (y >= 0) {
        while ((my_pow(base, y) * i) <= nb)
            i = i + 1;
        i = i - 1;
        res = (res + i) * 10;
        nb = nb - my_pow(base, y) * i;
        i = 0;
        y = y - 1;
    }
    res = res / 10;
    my_put_dec(res);
}