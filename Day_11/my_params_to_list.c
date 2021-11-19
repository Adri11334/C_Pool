/*
** EPITECH PROJECT, 2021
** params to list
** File description:
** task 01 day 11
*/
#include <stddef.h>
#include "include/mylist.h"
#include "include/my.h"
#include <stdlib.h>
#include <stdio.h>

linked_list_t *my_params_to_list(int ac, char * const *av)
{
    linked_list_t *last_insertion = NULL;
    linked_list_t *new_element = NULL;

    for (int i = 0; i != ac; i++) {
        new_element = malloc(sizeof(linked_list_t));
        new_element->data = av[i];
        new_element->next = last_insertion;
        last_insertion = new_element;
    }
    return last_insertion;
}
