/*
** EPITECH PROJECT, 2021
** square root
** File description:
** task05
*/
#include <unistd.h>

int my_compute_square_root(int nb)
{
    for (int i = 0; i * i < nb && i * i != nb; i++) {
        if (i * i == nb) {
            return i;
        }
        return 0;
    }
    return 0;
}
