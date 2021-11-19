/*
** EPITECH PROJECT, 2021
** put str
** File description:
** task02
*/
#include <unistd.h>

int my_strlen (char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return (i);
}
