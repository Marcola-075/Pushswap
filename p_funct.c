/*
** EPITECH PROJECT, 2018
** p_funct
** File description:
** p_funct
*/

#include <stdlib.h>
#include <stddef.h>
#include "my.h"

void pa(list_nb *lista, list_nb *listb)
{
    int tmp;
    number *tmp_one = listb->first_nb;

    listb->first_nb = listb->first_nb->next;
    tmp_one->next = lista->first_nb;
    lista->first_nb = tmp_one;    
}

void pb(list_nb *lista, list_nb *listb)
{
    int	tmp;
    number *tmp_one = lista->first_nb;

    lista->first_nb = lista->first_nb->next;
    tmp_one->next = listb->first_nb;
    listb->first_nb = tmp_one;
}
