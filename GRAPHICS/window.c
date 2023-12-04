/*
** EPITECH PROJECT, 2023
** WINDOW HANDLER
** File description:
** Do window things.
*/

#include "include/my.h"
#include "include/csfml.h"
sfRenderWindow *create_window(void)
{
    sfVideoMode mode = {1920, 1080, 32};
    sfRenderWindow *window;

    window = sfRenderWindow_create(mode, "MY RADAR",
    sfResize | sfClose, NULL);
    sfRenderWindow_setFramerateLimit(window, 60);
    return (window);
}

void delete_window(sfRenderWindow *window)
{
    sfRenderWindow_destroy(window);
}
