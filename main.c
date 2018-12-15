/*
** EPITECH PROJECT, 2018
** main
** File description:
** main
*/

#include <stddef.h>
#include "my.h"

int check_str(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] != '-' && str[i] < '0' || str[i] > '9')
            return (84);
        i = i + 1;
    }
    return (0);
}

int check_tab(char **tab)
{
    int i = 1;

    while (tab[i] != NULL) {
        if (check_str(tab[i]) == 84)
            return (84);
        i = i + 1;
    }
    return (0);
}

void push_swap(number **lista, number **listb)
{
    number *tmp_one = *lista;

    while ((*lista)->next != NULL) {
        if ((*lista)->nbr > (*lista)->next->nbr) {
            sa(lista);
            my_putstr(" ");
            pa(lista, listb);
        }
        else {
            pb(lista, listb);
        }
    }
    while ((*listb)->next != NULL) {
        pa(lista, listb);
        my_putstr(" ");
    }
    pa(lista, listb);
}

int main(int ac, char **av)
{
    number *lista = create_list();
    number *listb = create_list();
    int i = 1;

    if (check_tab(av) == 84)
        return (84);
    else
        while (av[i] != NULL) {
            put_in_end_list(&lista, my_getnbr(av[i]));
            i = i + 1;
        }
    push_swap(&lista, &listb);
    my_putstr("\n");
}
