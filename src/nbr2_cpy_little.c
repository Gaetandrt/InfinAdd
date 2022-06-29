/*
** EPITECH PROJECT, 2021
** nb2_cpy_little
** File description:
** nbr2_cpy_little
*/

#include <stdlib.h>
#include "../include/my.h"

char *nbr2_cpy_little(char **argv)
{
    int cpt_less = less_calculate(argv);
    char *nbr2 = malloc(sizeof(char) * my_strlen(argv[1]) + 1);
    int a = 0;

    for (int i = 0; i != cpt_less; i++) {
        nbr2[i] = '0';
    }
    while (argv[2][a] != '\0') {
        nbr2[cpt_less] = argv[2][a];
        a++;
        cpt_less++;
    }
    nbr2[my_strlen(argv[1])] = '\0';
    return (nbr2);
}
