/*
** EPITECH PROJECT, 2019
** my_params_to_list
** File description:
** test
*/

#include <stdlib.h>
#include "include/my.h"
#include "include/mylist.h"

linked_list_t *add(void *data, linked_list_t *list)
{
    linked_list_t *list2;

    list2 = malloc(sizeof(linked_list_t));
    list2->data = data;
    list2->next = list;
    return (list2);
}

linked_list_t *my_params_to_list(int ac, char const * const *av)
{
    linked_list_t *list;
    int i;

    i = 0;
    list = '\0';
    while(i < ac) {
        list = add(av[i], list);
        i = i + 1;
    }
    return (list);
}
