/*
** EPITECH PROJECT, 2021
** sort params
** File description:
** task 06
*/

void my_putchar(char c);
int my_putstr(char const *c);
int my_strlen(char const *str);

void *my_sort_params(int argc, char **argv)
{
    int argv_length = my_strlen(argv);
    
    for (int i = my_strlen(argv); i <= argc + 1; i++) {
        my_pustr(argv[i]);
        my_putchar('\n');
        argc--;
    }
}

int main(int argc, char **argv)
{
    my_sort_params(argc, argv);
    return (0);
}
