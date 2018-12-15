/*
** EPITECH PROJECT, 2018
** rr_funct
** File description:
** rr_funct
*/

#include <stddef.h>
#include "my.h"

void rra(number **lista)
{
    number *tmp_last = *lista;
    number *tmp_before_last = *lista;

    while (tmp_before_last->next->next != NULL)
        tmp_before_last = tmp_before_last->next;
    tmp_last = tmp_before_last->next;
    tmp_before_last->next = NULL;
    tmp_last->next = *lista;
    *lista = tmp_last;
}

void rrb(number **listb)
{
    number *tmp_last = *listb;
    number *tmp_before_last = *listb;

    while (tmp_before_last->next->next != NULL)
        tmp_before_last = tmp_before_last->next;
    tmp_last = tmp_before_last->next;
    tmp_before_last->next = NULL;
    tmp_last->next = *listb;
    *listb = tmp_last;
}

void rrr(number **lista, number **listb)
{
    rra(lista);
    rrb(listb);
}
