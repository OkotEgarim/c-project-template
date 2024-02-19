/*
** EPITECH PROJECT, 2024
** KJ_CHAR_COUNTER
** File description:
** Counts the char content.
*/

#include "../../../include/my.h"

int s_count(char *str, char c)
{
    int cpt = 0;
    int i = 0;

    for (; str[i] == c; ++i);
    for (; str[i] != '\0'; ++i)
        if (str[i] == c && str[i + 1] != c && str[i + 1] != '\0')
            ++cpt;
    return (cpt);
}
