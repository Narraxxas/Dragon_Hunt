/*
** EPITECH PROJECT, 2019
** my_strlen
** File description:
** count the number of characters in the string
*/

int my_strlen(char const *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i = i + 1;
    }
    return (i);
}

int size_ind(char *buffer, int i)
{
    while (buffer[i] != '\n')
        i = i + 1;
    i = i + 1;
    return (i);
}