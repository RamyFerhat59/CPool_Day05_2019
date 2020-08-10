/*
** EPITECH PROJECT, 2019
** my_compute_factorial_it.c
** File description:
** factorielle iterative
*/

#include <stdio.h>

int my_compute_factorial_it(int nb)
{
    int result = 1;
    int i;

    if (nb < 0){
        return (0);
    }
    else if (nb > 12){
        return (0);
    }
    else if (nb == 0){
        return (1);
    }
    for (i = 1; i <= nb; i++){
        result = result*i;
    }
    return (result);
}

