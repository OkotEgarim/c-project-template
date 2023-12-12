/*
** EPITECH PROJECT, 2023
** MY.H
** File description:
** List of functions avaliable in lib/my/
*/

#ifndef MY_CSFML
    #define MY_CSFML

    #include <SFML/System.h>
    #include <SFML/Graphics.h>
    #include <SFML/Window.h>
    #include <SFML/Audio.h>
    #include "my.h"

sfRenderWindow *create_window(void);
void delete_window(sfRenderWindow *);
void analyse_events(sfRenderWindow *, sfEvent);
#endif
