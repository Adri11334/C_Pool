/*
** EPITECH PROJECT, 2021
** csfml
** File description:
** task01 day 13
*/

#include <SFML/Graphics.h>

int main()
{
    sfVideoMode mode = {800, 600, 32};
    sfRenderWindow* window;
    sfEvent event;
    
    window = sfRenderWindow_create(mode, "SFML window", sfResize | sfClose, NULL);
    if (!window)
        return 84;
    while (sfRenderWindow_isOpen(window))
    {
        /* Process events */
        while (sfRenderWindow_pollEvent(window, &event))
        {
            /* Close window : exit */
            if (event.type == sfEvtClosed)
                sfRenderWindow_close(window);
        }
        /* Clear the screen */
        sfRenderWindow_clear(window, sfBlack);
        /* Update the window */
        sfRenderWindow_display(window);
    }
}
