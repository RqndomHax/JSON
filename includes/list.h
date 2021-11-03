/*
** EPITECH PROJECT, 2021
** list
** File description:
** linked lists
*/


#ifndef LIST_H_
#define LIST_H_

#include "pair.h"

typedef struct list_s
{
    pair_t *value;
    struct list_s *next;
}list_t;

void list_destroy(list_t **list);

list_t *list_add(list_t **list, pair_t *value);

int list_size(list_t *list);

#endif /* !LIST_H_ */
