/*
** EPITECH PROJECT, 2021
** task 02
** File description:
** day 11 task02 18 octobre 2021
*/
#include "include/mylist.h"
#include <stddef.h>

int my_list_size(linked_list_t const *begin)
{
    int count = 0;
    linked_list_t const *temp = begin;

    while (temp != NULL) {
        ++count;
        temp = temp->next;
    }
    return count;
}
