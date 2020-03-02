/*
** EPITECH PROJECT, 2019
** pointeur sur fonction
** File description:
** workshop pointeur sur fonction
*/

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include "my.h"

void print_str(va_list ap)
{
    my_putstr(va_arg(ap, char *));
}

void print_err(va_list ap)
{
    char *buffer = malloc(sizeof(char) * 11);

    (void)ap;
    read(2, buffer, 10);
    my_putstr(buffer);
}

flags_t *set_flags(void)
{
    flags_t *flags = malloc(sizeof(flags_t) * 8);

    flags[0].str = my_strdup("%s");
    flags[0].ptr = &print_str;
    flags[1].str = my_strdup("%d");
    flags[1].ptr = &print_nb;
    flags[2].str = my_strdup("%i");
    flags[2].ptr = &print_nb;
    flags[3].str = my_strdup("%c");
    flags[3].ptr = &print_char;
    flags[4].str = my_strdup("%u");
    flags[4].ptr = &print_dec;
    flags[5].str = my_strdup("%o");
    flags[5].ptr = &print_oct;
    flags[6].str = my_strdup("%b");
    flags[6].ptr = &print_bin;
    flags[7].str = my_strdup("%m");
    flags[7].ptr = &print_err;
    return (flags);
}