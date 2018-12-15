/*
** EPITECH PROJECT, 2018
** check_order
** File description:
** check_order
*/

#include <stddef.h>
#include "my.h"

int check_order(int ac, number **lista)
{
    number *tmp_one = *lista;
    int i = 1;
    int a = ac - 1;

    while(tmp_one->next != NULL && tmp_one->nbr < tmp_one->next->nbr) {
        tmp_one = tmp_one->next;
        i = i + 1;
    }
    if (i == a)
        return (1);
    else
        return (0);
    
}
