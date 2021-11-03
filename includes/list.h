/*
** EPITECH PROJECT, 2021
** list
** File description:
** linked lists
*/

#include <stdlib.h>

#ifndef LIST_H_
#define LIST_H_

typedef struct list_s
{
    char *value;
    struct list_s *next;
}list_t;

void list_destroy(list_t **list);

list_t *list_add(list_t **list, char *value);

int list_size(list_t *list);

#endif /* !LIST_H_ */
