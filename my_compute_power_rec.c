/*
** EPITECH PROJECT, 2019
** my_compute_power_rec.c
** File description:
** power rec
*/

#include <stdio.h>

int my_compute_power_rec(int nb, int p)
{
    long result;
    
    if (p < 0)
        return (0);
    if (p == 0)
        return (1);
    else
        return result = nb*my_compute_power_rec(nb , p-1);
}


