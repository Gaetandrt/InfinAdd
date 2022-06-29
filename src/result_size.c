/*
** EPITECH PROJECT, 2021
** malloc
** File description:
** malloc my result string
*/

#include <stdlib.h>
#include "../include/my.h"

char *result_size(char **argv)
{
    int nbr1 = my_strlen(argv[1]);
    int nbr2 = my_strlen(argv[2]);

    if (my_longest_str(argv) == 1) {
        return (my_result_write(nbr1));
    }
    if (my_longest_str(argv) == 2) {
        return (my_result_write(nbr2));
    }
    if (my_longest_str(argv) == 3) {
        return (my_result_write(nbr1));
    } else {
        return (argv[1]);
    }
}
