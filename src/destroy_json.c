/*
** EPITECH PROJECT, 2021
** json
** File description:
** destroy_json
*/

#include "../includes/json.h"

void destroy_json(json_t **json)
{
    if (!json || !(*json))
        return;
    if ((*json)->content)
        free((*json)->content);
    free(*json);
    *json = NULL;
}