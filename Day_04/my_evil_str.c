/*
** EPITECH PROJECT, 2021
** evil str
** File description:
** task04
*/
#include <unistd.h>

int my_strlen1(char const *str)
{
    int i = 0;
    
    while (str[i] != '\0') {
        i++;
    }
    return (i);
}

char *my_evil_str(char *str)
{
    int length = my_strlen1(str);
    char new_char[length];

    for (int i = 0; i < length; i++) {
        new_char[length - 1 - i] = str[i];
    }
    my_putstr1 (new_char, length);
    return 0;
}

int my_putstr1(char *str, int last_char_index)
{
    int i = 0;
    
    while (i != last_char_index) {
        my_putchar (str[i]);
        i++;
    }
    return 0;
}
