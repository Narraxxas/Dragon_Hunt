/*
** EPITECH PROJECT, 2019
** power function
** File description:
** simple power function
*/

unsigned int my_pow(unsigned int nb, unsigned int p)
{
    unsigned int res = 1;

    if (p == 0)
        return (1);
    while (p > 0) {
        res = res * nb;
        p = p - 1;
    }
    return (res);
}