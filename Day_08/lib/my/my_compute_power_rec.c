/*
** EPITECH PROJECT, 2021
** compute power rec
** File description:
** task04
*/
#include <unistd.h>

int my_compute_power_rec(int nb, int p)
{
    int final;

    if (nb >= 13)
        return 0;
    if (p <= 0)
        return 0;
    if (p > 0)
        final = nb * my_compute_power_rec(nb, p - 1);
    return final;
}
