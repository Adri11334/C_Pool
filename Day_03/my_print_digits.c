/*
** EPITECH PROJECT, 2021
** my digits
** File description:
** task03
*/
#include <unistd.h>

int my_print_digits(void)
{
    for (int digit = 48; digit < 58; digit++) {
        my_putchar (digit);
    }
    my_putchar ('\n');
    return (0);
}
