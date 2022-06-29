/*
** EPITECH PROJECT, 2021
** nbr2 longgest
** File description:
** nbr2_longgest
*/

#include <stdlib.h>
#include "../include/my.h"

char *nbr2_longgest(char **argv, char *result)
{
    char *nbr1 = nbr1_cpy_little(argv);
    char *nbr2 = nbr2_cpy(argv);
    int c = my_strlen(nbr2);
    int tmp;

    while (c >= 1) {
        tmp = cnv_dec(nbr1[c - 1]) + cnv_dec(nbr2[c - 1]) + cnv_dec(result[c]);
        if (tmp >= 10) {
            result[c] = (tmp % 10) + 48;
            result[c - 1] = '1';

        }
        if (tmp <= 9) {
            result[c] = tmp + 48;
        }
        if (tmp == 0) {
            result[c] = '0';
        }
        c--;
    }
    return (result);
}
