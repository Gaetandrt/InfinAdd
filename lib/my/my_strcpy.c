/*
** EPITECH PROJECT, 2021
** Day06
** File description:
** Task01
*/

char *my_strcpy(char *dest , char *src)
{
    int a = 0;

    for (; src[a] != '\0'; a++) {
        dest[a] = src[a];
    }
    dest[a++] = '\0';
    return (dest);
}
