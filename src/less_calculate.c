/*
** EPITECH PROJECT, 2021
** my_longest_str
** File description:
** find the longest string among 2 str
*/

#include "../include/my.h"
#include <stdio.h>

int less_calculate(char **argv)
{
    int nbr_1 = my_strlen(argv[1]);
    int nbr_2 = my_strlen(argv[2]);
    int cpt_less = 0;

    if ((nbr_1 - nbr_2) >= 0) {
        cpt_less = (nbr_1 - nbr_2);
    } else {
        cpt_less = (nbr_1 - nbr_2) * (-1);
    }
    return (cpt_less);
}
