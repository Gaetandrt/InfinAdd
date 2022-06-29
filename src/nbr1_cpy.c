/*
** EPITECH PROJECT, 2021
** nbr1 cpy
** File description:
** nbr1_cpy
*/

#include <stdlib.h>
#include "../include/my.h"

char *nbr1_cpy(char **argv)
{
    char *nbr1 = malloc(sizeof(char) * my_strlen(argv[1]) + 2);

    my_strcpy(nbr1, argv[1]);
    return (nbr1);
}
