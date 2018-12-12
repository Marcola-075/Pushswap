/*
** EPITECH PROJECT, 2018
** my_h
** File description:
** my_h
*/

#ifndef MY_H
#define MY_H

typedef struct number number;
struct number
{
    int nbr;
    number *next;
};

typedef struct list_nb list_nb;
struct list_nb
{
    number *first_nb;
};

struct list_nb *create_list();
void put_in_list(list_nb *list, int data);
void disp_list(list_nb *list);
void put_in_end_list(list_nb *list, int data);
int my_putstr(char const *str);
int    my_getnbr(char const *str);
int    my_put_nbr(int nb);
void sa(list_nb *lista);
void sb(list_nb *listb);
void sc(list_nb *lista, list_nb *listb);
void pa(list_nb *lista, list_nb *listb);
void pb(list_nb *lista, list_nb *listb);
list_nb ra(list_nb *lista);
list_nb rb(list_nb *listb);
void rra(list_nb *lista);
void rrb(list_nb *listb);
void rrr(list_nb *lista, list_nb *listb);

#endif
