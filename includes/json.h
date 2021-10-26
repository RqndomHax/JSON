/*
** EPITECH PROJECT, 2021
** json
** File description:
** space invader structure
*/

#ifndef JSON_H_
#define JSON_H_

#include "list.h"

typedef struct json_s
{
    char **argv;
    list_t *content;
}json_t;

#endif /* !JSON_H_ */