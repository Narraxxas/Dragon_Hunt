/*
** EPITECH PROJECT, 2019
** put functions
** File description:
** use the put functions
*/

#include <stdarg.h>
#include "my.h"

flags_t *set_flags(void);

void print_nb(va_list ap)
{
    my_put_nbr(va_arg(ap, int));
}

void print_char(va_list ap)
{
    my_putchar((char)va_arg(ap, int));
}

void print_dec(va_list ap)
{
    my_put_dec(va_arg(ap, unsigned int));
}

void print_oct(va_list ap)
{
    convert_base(va_arg(ap, unsigned int), 8);
}

void print_bin(va_list ap)
{
    convert_base(va_arg(ap, unsigned int), 2);
}