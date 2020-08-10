/*
** EPITECH PROJECT, 2019
** my_compute_power_it.c
** File description:
** power iterative
*/

#include <stdio.h>

int my_compute_power_it(int nb, int p)
{
    long result = 1;

    if (p == 0){
        return (1);
    }
    if (p < 0){
        return (0);
    }

    while (p != 0){
        if (result * nb < 2147483647 && result * nb > -2147483648){
            result *= nb;
            p--;
        }
        else
            return (0);
    }
    return (result);
}
