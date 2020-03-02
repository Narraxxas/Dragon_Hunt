/*
** EPITECH PROJECT, 2019
** my_put_dec
** File description:
** display the unsigned int given as parameter
*/

void my_putchar(char c);

void tmp_f_uns(unsigned int nb, unsigned int del, char rest, unsigned int less)
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

void positiv_number_uns(unsigned int nb)
{
    unsigned int del = 1;
    char rest = 'c';
    unsigned int less = 0;

    tmp_f_uns(nb, del, rest, less);
}

void null_number_uns(unsigned int nb)
{
    if (nb == 0)
        my_putchar('0');
}

unsigned int my_put_dec(unsigned int nb)
{
    null_number_uns(nb);
    positiv_number_uns(nb);
    return (0);
}