/*
** EPITECH PROJECT, 2021
** if_two_negat
** File description:
** if_two_negat
*/

#include "../include/my.h"

void if_two_negat(char **argv)
{
    argv[1] = argv[1] + 1;
    argv[2] = argv[2] + 1;

    my_add_str_positive(argv);
}
