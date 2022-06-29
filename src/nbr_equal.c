/*
** EPITECH PROJECT, 2021
** nbr equal
** File description:
** nbr_equal
*/

#include "../include/my.h"
#include <stdlib.h>

char *nbr_equal(char **argv, char *result)
{
    char *nbr1 = nbr1_cpy(argv);
    char *nbr2 = nbr2_cpy(argv);
    int c = my_strlen(nbr1);
    int tmp;

    while (c == 0) {
        tmp = cnv_dec(nbr1[c]) + cnv_dec(nbr2[c]) + cnv_dec(result[c]);
        if (tmp >= 10) {
            result[c] = (tmp % 10) + '0';
            result[c + 1] = '1';
        }
        c++;
    }
    return (result);
}
