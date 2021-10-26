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
    char *content;
    struct list_s *next;
}list_t;

void list_destroy(list_t **);

list_t *list_add(list_t **, char *);

int list_size(list_t *);

#endif /* !LIST_H_ */
