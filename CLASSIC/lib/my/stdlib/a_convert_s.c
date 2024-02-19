/*
** EPITECH PROJECT, 2024
** MY_STR_TO_WORD_ARRAY
** File description:
** Transform a string into an array.
*/

#include "../../../include/my.h"

char **a_convert_s(char *str, char sep)
{
    int deb = 0;
    int end = 0;
    int target = 0;
    char **tab = malloc(sizeof(char *) * (s_count(str, sep) + 2));

    for (; str[end] == sep; ++end)
        ++deb;
    for (; str[end] != '\0'; ++end)
        if (str[end] == sep && str[end + 1] != sep && str[end + 1] != '\0'){
            tab[target] = s_extract(str, deb, end);
            target++;
            deb = end + 1;
        }
    for (; str[end] == sep || (str[end] == '\0' &&
    str[end - 1] == sep); --end);
    tab[target] = s_extract(str, deb, end + 1);
    tab[target + 1] = NULL;
    return tab;
}
