/*
** EPITECH PROJECT, 2019
** my_compute_factorial_rec.c
** File description:
** factorielle rec
*/

#include <stdio.h>

int my_compute_factorial_rec(int nb)
{
    int result;
    
    if (nb < 0 || nb > 12)
    {
        return (0);
    }
    if (nb == 0)
    {
        return (1);
    }
    else
    {
        result = my_compute_factorial_rec(nb - 1)*nb;
    }
    return (result);
}

