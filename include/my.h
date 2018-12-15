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
    number *prev;
};

struct number *create_list();
void put_in_list(number **list, int data);
void disp_list(number *list);
void put_in_end_list(number **list, int data);
int my_putstr(char const *str);
int    my_getnbr(char const *str);
int    my_put_nbr(int nb);
void sa(number **lista);
void sb(number **listb);
void sc(number **lista, number **listb);
void pa(number **lista, number **listb);
void pb(number **lista, number **listb);
void ra(number **lista);
void rb(number **listb);
void rr(number **lista, number **listb);
void rra(number **lista);
void rrb(number **listb);
void rrr(number **lista, number **listb);

#endif
