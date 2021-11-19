/*
** EPITECH PROJECT, 2021
** compute factorial
** File description:
** task01
*/
#include <stdio.h>

int my_compute_factorial_it(int nb)
{
    int result = 1;
    int max_index = nb;

    if (nb < 0 || nb > 12)
        return 0;
    for (int i = 1; i <= max_index; i++)
        result = result * i;
    return result;
}
