/*
** EPITECH PROJECT, 2021
** print comb
** File description:
** task05
*/
#include <unistd.h>

void my_display(int to_dp)
{
    if (to_dp < 7) {
        my_putchar (',');
        my_putchar (' ');
    }
}

int my_print_comb(void)
{
    int cent = 0;
    int dix = 1;
    int uni = 2;

    while (cent != 8) {
        display_all (cent, dix, uni);
        if (uni == 9 && dix != 8) {
            dix++;
            uni = dix;
        }
        if (uni == 9 && dix == 8) {
            cent++;
            dix = cent + 1;
            uni = dix + 1;
        } else {
            uni++;
        }
    }
    my_putchar ('\n');
    return (0);
}

void display_all(int cent, int dix, int uni)
{
    my_putchar (cent + 48);
    my_putchar (dix + 48);
    my_putchar (uni + 48);
    my_display (cent);
}
