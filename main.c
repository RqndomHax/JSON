/*
** EPITECH PROJECT, 2021
** json
** File description:
** main
*/

#include "includes/json.h"
#include "includes/lib.h"
#include <stdio.h>

int main(int argc, char **argv)
{
    json_t *json;

    if (argc != 2)
        return (1);
    json = read_file(argv[1]);
    if (json == NULL)
        return (1);
    printf("file content = [%s]\n", json->content);
    destroy_json(&json);
    return (0);
}