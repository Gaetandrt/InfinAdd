/*
** EPITECH PROJECT, 2021
** print my result
** File description:
** my_result_print
*/

#include "../include/my.h"

void my_result_print(char *str)
{
    int i = 0;

    while (str[i] == '0') {
        i++;
    }
    my_putstr_dopped(str, i);
    my_putchar('\n');
}
