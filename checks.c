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
    if (i == a) {
        my_putstr("\n");
        return (1);
    }
    else
        return (0);
}

int check_ac(int ac)
{
    if (ac == 2)
        my_putstr("\n");
    if (ac < 3)
        return (1);
    else
        return (0);
}

int check_str(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] != '-' && str[i] < '0' || str[i] > '9')
            return (84);
        i = i + 1;
    }
    return (0);
}

int check_tab(char **tab)
{
    int i = 1;

    while (tab[i] != NULL) {
        if (check_str(tab[i]) == 84)
            return (84);
        i = i + 1;
    }
    return (0);
}
