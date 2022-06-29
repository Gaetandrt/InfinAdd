/*
** EPITECH PROJECT, 2021
** nbr1 longgest
** File description:
** nbr1_longgest
*/

#include <stdlib.h>
#include "../include/my.h"

char *nbr1_longgest(char **argv, char *result)
{
    char *nbr1 = nbr1_cpy(argv);
    char *nbr2 = nbr2_cpy_little(argv);
    int c = my_strlen(nbr1);
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
