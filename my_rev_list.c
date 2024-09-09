/*
** EPITECH PROJECT, 2019
** my_rev_list
** File description:
** aez
*/

#include <stdlib.h>
#include "include/my.h"
#include "include/mylist.h"

void my_rev_list(linked_list_t **begin)
{
    linked_list_t *liste;
    linked_list_t *tempo;
    linked_list_t *elem;

    liste = *begin;
    tempo = NULL;
    while (liste->next) {
        elem = liste->next;
        liste->next = tempo;
        tempo = liste;
        liste = elem;
    }
    liste->next = tempo;
    *begin = liste;
}
