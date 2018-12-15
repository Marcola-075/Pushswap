/*
** EPITECH PROJECT, 2018
** pushswap_alg
** File description:
** pushswap_alg
*/

#include <stddef.h>
#include "my.h"

void push_swap(number **lista, number **listb)
{
    number *tmp_one = *lista;

    while ((*lista)->next != NULL) {
        if ((*lista)->nbr > (*lista)->next->nbr) {
            sa(lista);
            pa(lista, listb);
        }
        else {
            pb(lista, listb);
        }
    }
    while ((*listb)->next != NULL)
        pa(lista, listb);
    pa_two(lista, listb);
}
