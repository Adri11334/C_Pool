/*
** EPITECH PROJECT, 2021
** my swap
** File description:
** task01
*/
#include <unistd.h>

void my_swap(int *a, int *b)
{
    int c = *a;
    
    *a = *b;
    *b = c;
}
