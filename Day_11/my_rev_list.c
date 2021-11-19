/*
** EPITECH PROJECT, 2021
** my_rev_list
** File description:
** task 03 day 11
*/

#include <stdlib.h>
#include "include/my.h"
#include "include/mylist.h"

int my_list_size(linked_list_t const *begin);

void my_rev_list(linked_list_t **begin)
{
    int length = my_list_size(*begin);
    linked_list_t *last = NULL;
    linked_list_t *tmp = NULL;
    linked_list_t *next = NULL;

    tmp = begin;
    for (int i = 0; length > i; ++i) {
        next = tmp->next;
        tmp->next = last;
        last = tmp;
        tmp = next;
    }
}
