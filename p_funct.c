/*
** EPITECH PROJECT, 2018
** p_funct
** File description:
** p_funct
*/

#include <stdlib.h>
#include <stddef.h>
#include "my.h"

void pa(number **lista, number **listb)
{
    number *tmp_one = *listb;

    if (*lista != NULL && *listb != NULL) {
        put_in_list(lista, (*listb)->nbr);
        *listb = (*listb)->next;
    }
    else if (*listb == NULL)
        return;
    else {
        *listb = (*listb)->next;
        tmp_one->next = *lista;
        *lista = tmp_one;
    }
    my_putstr("pa");
}

void pb(number **listb, number **lista)
{
    number *tmp_one = *listb;

    if (*lista != NULL && *listb != NULL) {
        put_in_list(lista, (*listb)->nbr);
        *listb = (*listb)->next;
    }
    else if (*listb == NULL)
        return;
    else {
        *listb = (*listb)->next;
        tmp_one->next = *lista;
        *lista = tmp_one;
    }
    my_putstr("pb ");
}
