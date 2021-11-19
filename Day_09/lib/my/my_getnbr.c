/*
** EPITECH PROJECT, 2021
** get nbr
** File description:
** task05
*/

int my_getnbr(char const *str)
{
    int i = 0;
    int k = 0;
    int moins_count;
    long final_char;

    while (str[i] != '\0') {
        while (str[i] >= '0' && str[i] <= '9') {
            k = (str[i] - 48);
            final_char = (final_char * 10) + k;
            if (final_char > 2147483647 || final_char < -2147483648) {
                return (0);
            }
            i++;
        }
        if (str[i] == '-') {
            moins_count *= -1;
        }
        i++;
    }
    return (final_char * moins_count);
}
