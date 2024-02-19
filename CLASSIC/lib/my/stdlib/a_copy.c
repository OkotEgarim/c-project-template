/*
** EPITECH PROJECT, 2024
** KJ_BOARD_DUPLICATOR
** File description:
** Return the copy of an array.
*/

#include "../../../include/my.h"

char **a_copy(char **array)
{
    char **copy = malloc(sizeof(char *) * (a_size(array) + 1));
    int i = 0;

    for (; array[i] != NULL; ++i)
        copy[i] = s_dup(array[i]);
    copy[i] = NULL;
    return copy;
}
