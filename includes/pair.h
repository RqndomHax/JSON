/*
** EPITECH PROJECT, 2021
** pair
** File description:
** pair
*/

#ifndef PAIR_H_
#define PAIR_H_

typedef struct pair_s
{
    char *key;
    void *value;
    int alloc;
}pair_t;

void pair_destroy(pair_t **pair);

pair_t *pair_init(char *key, void *value, int alloc);

#endif /* !PAIR_H_ */