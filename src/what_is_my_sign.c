/*
** EPITECH PROJECT, 2021
** what is my sign
** File description:
** what_is_my_sign
*/

#include "../include/my.h"
#include <stdio.h>

int what_is_my_sign(char **argv)
{
    if (argv[1][0] == '-' && argv[2][0] == '-') {
        printf("test");
        if_two_negat(argv);
        return (0);
    }
    if (argv[1][0] != '-' && argv[2][0] != '-') {
        printf("test1");
        my_add_str_positive(argv);
        return (0);
    }
    if (argv[1][0] == '-' || argv[2][0] == '-') {
        if_one_negativ(argv);
        return (0);
    }
}
