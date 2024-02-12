/*
** EPITECH PROJECT, 2023
** KJ_CONVERT_BASE
** File description:
** Convert a integer into a given base.
*/

#include "../../../include/my.h"
const char symboles[] = "0123456789abcdefghijklmnopqrstuvwxyz";

char *n_base(unsigned long long nb, int base)
{
    char *result = s_dup("");
    char carac[] = "#";

    while (nb > 0){
        carac[0] = symboles[nb % base];
        result = s_merge(result, carac);
        nb /= base;
    }
    return (result);
}
