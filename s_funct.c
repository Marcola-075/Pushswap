/*
** EPITECH PROJECT, 2018
** s_funct
** File description:
** s_funct
*/

#include "my.h"

void sa(list_nb *lista)
{
    int tmp;
    number *tmp_one = lista->first_nb;

    tmp = tmp_one->nbr;
    tmp_one->nbr = tmp_one->next->nbr;
    tmp_one->next->nbr = tmp;
    lista->first_nb = tmp_one;
    
}

void sb(list_nb *listb)
{
    int	tmp;
    number *tmp_one = listb->first_nb;

    tmp = tmp_one->nbr;	
    tmp_one->nbr = tmp_one->next->nbr;
    tmp_one->next->nbr = tmp;
    listb->first_nb = tmp_one;
}

void sc(list_nb *lista, list_nb *listb)
{
    sa(lista);
    sb(listb);
}
