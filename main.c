/*
** EPITECH PROJECT, 2021
** json
** File description:
** main
*/

#include "includes/json.h"
#include "includes/lib.h"
#include <stdio.h>

void init_content(json_t *json, char *filepath)
{
    char *content = read_file(filepath);

    if (content != NULL)
        list_add(&json->content, content);
}

int main(int argc, char **argv)
{
    json_t json;
    list_t *tmp;

    json.argv = argv;
    json.content = NULL;
    for (int i = 1; i < argc; init_content(&json, argv[i++]));
    tmp = json.content;
    while (tmp != NULL) {
        printf("file content = {%s}\n\n", tmp->content);
        tmp = tmp->next;
    }
    list_destroy(&json.content);
    return (0);
}