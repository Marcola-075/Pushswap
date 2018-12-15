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
    number *tmp_two = *lista;

    if (*lista != NULL && *listb != NULL || *lista == NULL) {
        *listb = (*listb)->next;
        tmp_one->next = *lista;
        *lista = tmp_one;
        my_putstr("pa ");
    }
    else if (*listb == NULL)
        return;
}

void pb(number **listb, number **lista)
{
    number *tmp_one = *listb;
    number *tmp_two = *lista;

    if (*lista != NULL && *listb != NULL || *lista == NULL) {
        *listb = (*listb)->next;
        tmp_one->next = *lista;
        *lista = tmp_one;
    }
    else if (*listb == NULL)
        return;
    my_putstr("pb ");
}

void pa_two(number **lista, number **listb)
{
    number *tmp_one = *listb;
    number *tmp_two = *lista;

    if (*lista != NULL && *listb != NULL || *lista == NULL) {
        *listb = (*listb)->next;
        tmp_one->next = *lista;
        *lista = tmp_one;
        my_putstr("pa");
    }
    else if (*listb == NULL)
        return;
}
