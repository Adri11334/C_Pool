/*
** EPITECH PROJECT, 2021
** print params
** File description:
** task 04
*/

void my_putchar(char c);
int my_putstr(char const *c);

void *my_rev_params(int argc, char **argv)
{
    while (argc != 0) {
        my_pustr(argv[argc - 1]);
        my_putchar('\n');
        argc--;
    }
}

int main(int argc, char **argv)
{
    my_rev_params(argc, argv);
    return (0);
}
