/*
** EPITECH PROJECT, 2023
** EVENT HANDLER
** File description:
** Do event things.
*/

#include "../include/csfml.h"

void analyse_events(sfRenderWindow *window, sfEvent event)
{
    if (event.type == sfEvtClosed)
        sfRenderWindow_close(window);
}
