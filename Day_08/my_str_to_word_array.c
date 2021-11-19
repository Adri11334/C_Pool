/*
** EPITECH PROJECT, 2021
** str to word array
** File description:
** task04
*/
# include <stdlib.h>
# include <stdio.h>

int my_str_isalphnum(char c)
{
    if ((c <= 57 && 48 <= c)
        ||(c <= 122 && 97 <= c)
        || (c <= 90 && 65 <= c)) {
        return 1;
    } 
    return 0;
}

int word_number(char const *str)
{
    int result = 0;

    for (int index = 0; str[index] != '\0'; index++) {
        if (my_str_isalphnum(str[index]) == 1
            && my_str_isalphnum(str[index + 1]) != 1)
            result++;
    }
    return result;
}

char **my_str_to_word_array(char const *str)
{
    int word_nb = word_number(str);
    int str_index = 0;
    int dest_elem = 0;
    char **dest = malloc(sizeof(char*) * (word_nb + 1));

    for (int dest_i = 0; dest_i < word_nb; dest_i++) {
        dest[dest_i] = malloc(255);
        while (str[str_index] != '\0' && my_str_isalphnum(str[str_index]) == 1) {
            dest[dest_i][dest_elem] = str[str_index];
            dest_elem++;
            str_index++;
        }
        dest[dest_i][dest_elem + 1] = '\0';
        dest[dest_i][dest_elem] = '\n';
        str_index++;
        dest_i++;
    }
    free (dest);
    return dest;
}
