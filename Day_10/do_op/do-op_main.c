/*
** EPITECH PROJECT, 2021
** do op 
** File description:
** task02 day10
*/
#include <stdio.h>
#include <string.h>
#include "../include/my.h"

char my_get_sign(char const *value);
int check_params(char *value1, char const *operation, char *value2);

int main(int ac, char **av)
{
    if (ac >= 4) {
        check_params(av[1], av[2], av[3]);
    }
    return (0);
}

int check_params(char *value1, char const *operation, char *value2)
{
    printf("%c\n char", value1);
    int op1 = atoi(value1);
    char op_sign = my_get_sign(operation);
    int op2 = my_getnbr(value2);

    printf("%d\n%c\n%d\n", op1, op_sign, op2);

    return 0;
}

char my_get_sign(char const *value)
{
    int i = 0;
    char result;

    while (value[i] != '\0') {
        if (value[i] == '*' || value[i] == '%' || value[i] == '/' || value[i] == '+' || value[i] == '-') {
            return value[i];
        }
        i++;
    }
    return '\0';
}
