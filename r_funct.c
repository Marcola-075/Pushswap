/*
** EPITECH PROJECT, 2018
** r_funct
** File description:
** r_funct
*/

#include <stddef.h>
#include "my.h"

list_nb ra(list_nb *lista)
{
    number *tmp_one = lista->first_nb;
    number *tmp_two = lista->first_nb->next;

    while (tmp_one->next != NULL)
        tmp_one = tmp_one->next;
    tmp_one->next = lista->first_nb;
    lista->first_nb = tmp_two;
    tmp_one->next->next = NULL;

    return (*lista);
}

list_nb rb(list_nb *listb)
{
    number *tmp_one = listb->first_nb;
    number *tmp_two = listb->first_nb->next;

    while (tmp_one->next != NULL)
        tmp_one	= tmp_one->next;
    tmp_one->next = listb->first_nb;
    listb->first_nb = tmp_two;
    tmp_one->next->next	= NULL;

    return (*listb);
}

void rr(list_nb *lista, list_nb *listb)
{
    ra(lista);
    rb(listb);
}
