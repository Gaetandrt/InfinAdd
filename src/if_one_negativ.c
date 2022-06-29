/*
** EPITECH PROJECT, 2021
** if one negativ
** File description:
** if_one_negativ
*/

#include "../include/my.h"

char if_one_negativ(char **argv)
{
    if (argv[1][0] == '-') {
        nbr1_negativ(argv);
    }
    if (argv[2][0] == '-') {
        nbr2_negativ(argv);
    } else {
        return (42);
    }
    return (0);
}
