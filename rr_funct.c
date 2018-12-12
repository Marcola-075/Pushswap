/*
** EPITECH PROJECT, 2018
** rr_funct
** File description:
** rr_funct
*/

#include <stddef.h>
#include "my.h"

void rra(list_nb *lista)
{
    number *tmp_last = lista->first_nb;
    number *tmp_before_last = lista->first_nb;

    while (tmp_before_last->next->next != NULL)
        tmp_before_last = tmp_before_last->next;
    tmp_last = tmp_before_last->next;
    tmp_before_last->next = NULL;
    tmp_last->next = lista->first_nb;
    lista->first_nb = tmp_last;
}

void rrb(list_nb *listb)
{
    number *tmp_last = listb->first_nb;
    number *tmp_before_last = listb->first_nb;

    while (tmp_before_last->next->next != NULL)
        tmp_before_last = tmp_before_last->next;
    tmp_last = tmp_before_last->next;
    tmp_before_last->next = NULL;
    tmp_last->next = listb->first_nb;
    listb->first_nb = tmp_last;
}

void rrr(list_nb *lista, list_nb *listb)
{
    rra(lista);
    rrb(listb);
}
