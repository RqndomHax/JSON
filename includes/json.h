/*
** EPITECH PROJECT, 2021
** json
** File description:
** space invader structure
*/

#ifndef JSON_H_
#define JSON_H_

#include <stdlib.h>
#include "list.h"

typedef struct json_s
{
    char *content;
    list_t *elements;
}json_t;

json_t *read_file(char *filepath);

void destroy_json(json_t **json);

#endif /* !JSON_H_ */