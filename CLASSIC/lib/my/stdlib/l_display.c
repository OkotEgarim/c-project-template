/*
** EPITECH PROJECT, 2023
** DISPLAY_LIST
** File description:
** Print the content of a linked list.
*/

#include "../../../include/my.h"
void l_display(linked_list_t *list, void (*disp_fct)())
{
    linked_list_t *tmp = list;

    for (; tmp != NULL; tmp = tmp->next)
        disp_fct(tmp->data);
}
