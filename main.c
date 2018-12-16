/*
** EPITECH PROJECT, 2018
** main
** File description:
** main
*/

#include <stddef.h>
#include "my.h"

int main(int ac, char **av)
{
    number *lista = create_list();
    number *listb = create_list();
    int i = 1;

    if (check_ac(ac) == 1)
        return (0);
    if (ac == 1)
        return (84);
    if (check_tab(av) == 84)
        return (84);
    while (av[i] != NULL) {
        put_in_end_list(&lista, my_getnbr(av[i]));
        i = i + 1;
    }
    if (check_order(ac, &lista) == 1)
        return (0);
    push_swap(&lista, &listb);
    my_putstr("\n");
    return (0);
}
