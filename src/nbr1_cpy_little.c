/*
** EPITECH PROJECT, 2021
** nbr1_cpy_little
** File description:
** nbr1_cpy_little
*/

#include <stdlib.h>
#include "../include/my.h"

char *nbr1_cpy_little(char **argv)
{
    int cpt_less = less_calculate(argv);
    char *nbr1 = malloc(sizeof(char) * my_strlen(argv[2]) + 1);
    int a = 0;

    for (int i = 0; i != cpt_less; i++) {
        nbr1[i] = '0';
    }
    while (argv[1][a] != '\0') {
        nbr1[cpt_less] = argv[1][a];
        a++;
        cpt_less++;
    }
    nbr1[my_strlen(argv[2])] = '\0';
    return (nbr1);
}
