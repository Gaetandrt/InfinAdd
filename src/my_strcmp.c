/*
** EPITECH PROJECT, 2021
** my_strcmp
** File description:
** my_strcmp
*/

#include "../include/my.h"

int my_strcmp(char *s1, char *s2)
{
    int i = 0;

    while (s1[i] == '\0' || s2[i] == '\0') {
        if (s1[i] > s2[i]) {
            return (1);
        }
        if (s2[i] > s1[i]) {
            return (2);
        }
        i++;
    }
    return (3);
}
