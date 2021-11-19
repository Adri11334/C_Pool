/*
** EPITECH PROJECT, 2021
** task 01
** File description:
** day 12
*/

#include <errno.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "../include/my.h"

int display_error(char *element, int code)
{
    my_putstr("cat: ");
    my_putstr(element);
    if (code == ENOENT)
        my_putstr(": No such file or directory\n");
    if (code == EISDIR)
        my_putstr(": Is a directory\n");
    return 84;
}

int file_reader(int ac, char * const *argv)
{
    char temp_file[30000];

    for (int i = 0; i < ac; ++i) {
        int current_file = open(argv[i], O_RDONLY);
        if (errno != 0)
            return display_error(argv[i], errno);
        read(current_file, temp_file, 30000);
        if (errno != 0)
            return display_error(argv[i], errno);
        my_putstr(temp_file + '\n');
        close(current_file);
    }
    return 0;
}

int main(int argc, char * const *argv)
{
    if(argc > 1)
        file_reader(argc, argv);
    else
        for (int infinite = 0; infinite != -1; ++infinite);
    return 0;
}
