/*
** EPITECH PROJECT, 2021
** comb 2
** File description:
** task 06
*/
#include <unistd.h>

void my_display2(int to_dp)
{
    if (to_dp < 98) {
        my_putchar (',');
        my_putchar (' ');
    }
}

int my_print_comb2(void)
{
    int index_right = 01;
    
    for (int index_left = 00; index_left < 99; index_left++) {
        display_all2 (index_left, index_right);
	if (index_left <= 99 && index_right == 99) {
            index_left++;
            index_right	= index_left + 1;
	} else {
            index_right++;
        }
    }
    my_putchar ('\n');
    return (0);
}

void display_all2(int nb1, int nb2)
{
    my_putchar (nb1 / 10 + 48);
    my_putchar (nb1 % 10 + 48);
    my_putchar (' ');
    my_putchar (nb2 / 10 + 48);
    my_putchar (nb2 % 10 + 48);
    my_display2 (nb1);
}
