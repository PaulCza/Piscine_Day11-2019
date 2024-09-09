/*
** EPITECH PROJECT, 2019
** my_list_size
** File description:
** zaljza
*/

#include <stdlib.h>
#include "include/my.h"
#include "include/mylist.h"

int my_list_size(linked_list_t const *begin)
{
    int size;
    linked_list_t *yolo;

    yolo = begin;
    size = 0;
    while(yolo) {
        size = size + 1;
        yolo = yolo->next;
    }
    return (size);
}
