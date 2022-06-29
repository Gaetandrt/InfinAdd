/*
** EPITECH PROJECT, 2021
** my_result_write
** File description:
** my_result_write
*/

#include <stdlib.h>
#include "../include/my.h"

char *my_result_write(int nbr)
{
    char *result = malloc(sizeof(char) * nbr + 3);
    result[nbr + 1] = '\0';

    while (nbr >= 0) {
        result[nbr] = '0';
        nbr--;
    }
    return (result);
}
