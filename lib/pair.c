/*
** EPITECH PROJECT, 2021
** pair
** File description:
** pair
*/

#include <stdlib.h>
#include "../includes/pair.h"

static int pair_strlen(char *str)
{
    int length = 0;

    for(; str[length]; length++);
    return (length);
}

static void pair_strdmp(char *src, char **target)
{
    int src_length = pair_strlen(src);

    *target = malloc(src_length+1);
    (*target)[src_length] = 0;
    for (int i = 0; i < src_length; i++)
        (*target)[i] = src[i];
}

void pair_destroy(pair_t **pair)
{
    if (!pair || !(*pair))
        return;
    if ((*pair)->alloc)
        free((*pair)->key);
    free(*pair);
    *pair = NULL;
}

pair_t *pair_init(char *key, void *value, int alloc)
{
    pair_t *pair = NULL;
    if (!key)
        return (NULL);

    pair = malloc(sizeof(pair_t));
    if (!pair)
        return (NULL);
    pair->key = key;
    pair->value = value;
    pair->alloc = alloc;
    if (alloc)
        pair_strdmp(key, &(pair->key));
    if (!pair->key) {
        free(pair);
        pair = NULL;
    }
    return (pair);
}