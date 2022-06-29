/*
** EPITECH PROJECT, 2021
** add_function
** File description:
** add operation from 2 strings
*/

#include "../include/my.h"

void my_add_str_positive(char **argv)
{
    char *result = result_size(argv);

    if (my_longest_str(argv) == 1) {
        my_result_print(nbr1_longgest(argv, result));
    }
    if (my_longest_str(argv) == 2) {
        my_result_print(nbr2_longgest(argv, result));
    }
    if (my_longest_str(argv) == 3) {
        my_result_print(nbr1_longgest(argv, result));
    }
}
