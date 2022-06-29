/*
** EPITECH PROJECT, 2021
** putstr custom
** File description:
** my_putstr_custom
*/

#include "../include/my.h"

void my_putstr_dopped(char *str, int i)
{
    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
}
