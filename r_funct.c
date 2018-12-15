/*
** EPITECH PROJECT, 2018
** r_funct
** File description:
** r_funct
*/

#include <stddef.h>
#include "my.h"

void ra(number **lista)
{
    number *tmp_one = *lista;
    number *tmp_two = (*lista)->next;

    while (tmp_one->next != NULL)
        tmp_one = tmp_one->next;
    tmp_one->next = *lista;
    *lista = tmp_two;
    tmp_one->next->next = NULL;
}

void rb(number **listb)
{
    number *tmp_one = *listb;
    number *tmp_two = (*listb)->next;

    while (tmp_one->next != NULL)
        tmp_one = tmp_one->next;
    tmp_one->next = *listb;
    *listb = tmp_two;
    tmp_one->next->next = NULL;
}

void rr(number **lista, number **listb)
{
    ra(lista);
    rb(listb);
}
