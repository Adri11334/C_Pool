/*
** EPITECH PROJECT, 2021
** compute poyer it
** File description:
** task03
*/
#include <unistd.h>

int my_compute_power_it(int nb, int p)
{
    long c = nb;

    if (p == 0)
        return 1;
    if (p < 0)
        return 0;
    for (int pow = nb; p > 1; p--) {
        nb *= pow;
        c *= pow;
        if (c != nb)
            return 0;
    }
    return nb;
}
