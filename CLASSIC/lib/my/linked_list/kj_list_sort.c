/*
** EPITECH PROJECT, 2023
** KJ_LIST_SORT
** File description:
** Sort a linked list in alpha order.
*/

#include"../../../include/my.h"
void kj_list_sort(linked_list_t **files)
{
    linked_list_t *tmp = *files;
    char *temp;

    for (int mod_count = 0; mod_count > 0 ||
    tmp->next != NULL; tmp = tmp->next){
        if (tmp->next == NULL && mod_count > 0){
            tmp = *files;
            mod_count = 0;
        }
        if (kj_stracmp(tmp->data, tmp->next->data) > 0){
            temp = tmp->data;
            tmp->data = tmp->next->data;
            tmp->next->data = temp;
            ++mod_count;
        }
    }
}
