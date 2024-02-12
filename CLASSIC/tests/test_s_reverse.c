/*
** EPITECH PROJECT, 2024
** TEST MAIN
** File description:
** Unit test for the main function.
*/

#include <criterion/criterion.h>
#include "../include/my.h"
Test(s_reverse, is_reverse_working)
{
    char *c = s_dup("Hello");
    char *d = s_dup("olleH");

    c = s_reverse(c);
    cr_assert_str_eq(c, d);
    free(c);
    free(d);
}
