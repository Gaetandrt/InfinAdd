/*
** EPITECH PROJECT, 2021
** my_longest_str
** File description:
** compare 2 strings and return the number of caracter of the longest one
*/

#include "../include/my.h"

int my_longest_str(char **argv)
{
    int nbr1 = my_strlen(argv[1]);
    int nbr2 = my_strlen(argv[2]);

    if (nbr1 > nbr2) {
        return (1);
    }
    if (nbr1 < nbr2) {
        return (2);
    } else {
        return (3);
    }
}
