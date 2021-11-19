/*
** EPITECH PROJECT, 2021
** alpha print
** File description:
** task01
*/
#include <unistd.h>

int my_print_alpha(void)
{
    int letter = 96;

    for (int i = 0; i < 26; i++) {
        letter++;
        my_putchar (letter);
    }
    my_putchar ('\n');
    return (0);
}
