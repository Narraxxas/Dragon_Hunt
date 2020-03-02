/*
** EPITECH PROJECT, 2019
** my_put_nbr
** File description:
** display the int given as parameter
*/

void my_putchar(char c);

void tempo_f(int nb, int del, char rest, int less)
{
    while (nb - (nb % del) != 0)
        del = del * 10;
    del = del / 10;
    while (del != 0) {
        if (nb != 0) {
            rest = nb / del + 48;
            my_putchar(rest);
            less = rest - 48;
            nb = nb - (less * del);
            del = del / 10;
        }
        else {
            my_putchar('0');
            del = del / 10;
        }
    }
}

void positiv_number(int nb)
{
    int del = 1;
    char rest = 'c';
    int less = 0;

    tempo_f(nb, del, rest, less);
}

void negativ_number(int nb)
{
    int del = 1;
    char rest = 'c';
    int less = 0;

    if (nb <0) {
        nb = nb * (-1);
        tempo_f(nb, del, rest, less);
    }
}

void null_number(int nb)
{
    if (nb == 0)
        my_putchar('0');
}

int my_put_nbr(int nb)
{
    null_number(nb);
    positiv_number(nb);
    negativ_number(nb);
    return (0);
}