/*
** EPITECH PROJECT, 2021
** print params
** File description:
** task 04
*/

void my_putchar(char c);
int my_putstr(char const *c);

void *my_print_params(int argc, char **argv)
{
    for (int i = 0; i != argc; i++) {
        my_pustr(argv[i]);
        my_putchar('\n');
    }
}

int main(int argc, char **argv)
{
    my_print_params(argc, argv);
    return (0);
}
