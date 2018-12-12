/*
** EPITECH PROJECT, 2018
** manage_lklist
** File description:
** manage_lklist
*/

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "my.h"

struct list_nb *create_list()
{
   list_nb *list = malloc(sizeof(*list));

    list->first_nb = NULL;
    return (list);
}

void put_in_list(list_nb *list, int data)
{
    number *new = malloc(sizeof(*new));
    
    new->nbr = data;
    new->next = list->first_nb;
    list->first_nb = new;
}

void put_in_end_list(list_nb *list, int data)
{
    number *tmp = malloc(sizeof(*tmp));
    number *new = malloc(sizeof(*new));
    
    new->nbr = data;
    new->next = NULL;
    tmp = list->first_nb;
    if (tmp != NULL) {
        while (tmp->next != NULL)
            tmp = tmp->next;
        tmp->next = new;
    }
    else
        list->first_nb = new;
}

void disp_list(list_nb *list)
{
    number *nb;
    
    nb = list->first_nb;
    while (nb != NULL) {
        my_put_nbr(nb->nbr);
        my_putstr("-> ");
        nb = nb->next;
    }
    my_putstr("NULL\n");
}
