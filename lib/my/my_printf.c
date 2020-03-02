/*
** EPITECH PROJECT, 2019
** main file
** File description:
** entry of binary
*/

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include "my.h"

char *give_flag(char *str)
{
    int y = 0;
    char *return_value = malloc(sizeof(char) * 3);

    while (y < 2) {
        return_value[y] = str[y];
        y = y + 1;
    }
    return_value[y] = 0;
    return (return_value);
}

int flag_gestion(flags_t *flags, int i, char *buffer, va_list ap)
{
    int y = 0;

    while (y < 8) {
        if (my_strcmp(flags[y].str, give_flag(&buffer[i])) == 0)
            flags[y].ptr(ap);
        y = y + 1;
    }
    y = 0;
    i = i + 2;
    return (i);
}

int my_printf(char *buffer, ...)
{
    int i = 0;
    va_list ap;

    flags_t *flags = set_flags();
    va_start(ap, buffer);
    while (buffer[i] != 0) {
        if (buffer[i] != '%') {
            my_putchar(buffer[i]);
            i = i + 1;
        }
        else if (buffer[i] == '%') {
            i = flag_gestion(flags, i, buffer, ap);
        }
    }
    va_end(ap);
    return (0);
}