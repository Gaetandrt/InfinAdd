/*
** EPITECH PROJECT, 2021
** nbr2 cpy
** File description:
** nbr2_cpy
*/

#include "../include/my.h"
#include <stdlib.h>

char *nbr2_cpy(char **argv)
{
    char *nbr2 = malloc(sizeof(char) * my_strlen(argv[2]) + 2);

    my_strcpy(nbr2, argv[2]);
    return (nbr2);
}
