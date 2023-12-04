/*
** EPITECH PROJECT, 2023
** MAIN
** File description:
** Project main file.
*/

#include "include/my.h"
#include "include/csfml.h"
int menu(void)
{
    sfRenderWindow *window = create_window();
    sfEvent event;

    while (sfRenderWindow_isOpen(window)){
        while (sfRenderWindow_pollEvent(window, &event))
            analyse_events(window, event);
        sfRenderWindow_clear(window, sfWhite);
        sfRenderWindow_display(window);
    }
    delete_window(window);
}

int main(void)
{
    menu();
}
