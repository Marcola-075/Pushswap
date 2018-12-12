/*
** EPITECH PROJECT, 2018
** main
** File description:
** main
*/

#include <stddef.h>
#include "my.h"

int check_str(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] < '0' || str[i] > '9')
            return (84);
	i = i + 1;
    }
    return (0);
}

int check_tab(char **tab)
{
    int i = 1;
    
    while(tab[i] != NULL) {
        if (check_str(tab[i]) == 84)
            return (84);
        i = i + 1;
    }
    return (0);
}

int main(int ac, char **av)
{
    list_nb *lista = create_list();
    list_nb *listb = create_list();
    int i = 1;

    //put_in_end_list(listb, 12);
    //put_in_end_list(listb, 13);

    if(check_tab(av) == 84)
        return (84);
    else
        while (av[i] != NULL) {
            put_in_end_list(lista, my_getnbr(av[i]));
            i = i + 1;
        }
    rrb(lista);
    disp_list(lista);
}
