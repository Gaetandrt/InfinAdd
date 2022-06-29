/*
** EPITECH PROJECT, 2021
** my_is_prime
** File description:
** in build
*/

#include <stdio.h>

int my_is_prime(int nb)
{
    int i = 2;

    if (nb <= 0 || nb == 1) {
        return (0);
    }
    while (i < nb) {
        printf("%d\n", nb);
        if (nb % i == 0) {
            return (0);
        }
        printf("%d\n", nb);
        i++;
    }
    return (1);
}

int main(void)
{
    int nb = 83;
    my_is_prime(nb);
}
