/*
** EPITECH PROJECT, 2021
** concat params
** File description:
** task02
*/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

int my_strlen (char const *str);
int my_putstr (char const *str);
char *my_strcat(char *dest, char const *src);

char *concat_params(int argc, char **argv)
{
    char *concat_str;
    int conc_nuber = 0;
    int total_char = 0;

    for (int ar_i = 0; argv[ar_i] != NULL; ar_i++) {
        total_char += my_strlen(argv[ar_i]) + 1;
    }
    concat_str = malloc(sizeof(char) * (total_char + 1));
    for (int arg_i = arg_i; argv[arg_i] != NULL; arg_i++) {
        my_strcat(concat_str, argv[arg_i]);
    }
    return concat_str;
}
