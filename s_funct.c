/*
** EPITECH PROJECT, 2018
** s_funct
** File description:
** s_funct
*/

#include <stddef.h>
#include "my.h"

void sa(number **lista)
{
    number *tmp_one = *lista;

    if (tmp_one == NULL || tmp_one->next == NULL)
        return;
    *lista = (*lista)->next;
    tmp_one->next = (*lista)->next;
    (*lista)->next = tmp_one;
    my_putstr("sa");
}

void sb(number **listb)
{
    number *tmp_one = *listb;

    if (tmp_one == NULL || tmp_one->next == NULL)
        return;
    *listb = (*listb)->next;
    tmp_one->next = (*listb)->next;
    (*listb)->next = tmp_one;
    my_putstr("sb");
}

void sc(number **lista, number **listb)
{
    sa(lista);
    sb(listb);
    my_putstr("sc");
}
