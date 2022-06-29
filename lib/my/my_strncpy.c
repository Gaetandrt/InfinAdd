/*
** EPITECH PROJECT, 2021
** Day06
** File description:
** Task02
*/

char *my_strncpy(char *dest , char const *src , int n)
{
    int a = 0;

    for (; src[a] != '\0' && n > 0; a++) {
        dest[a] = src[a];
        n--;
    }
    dest[a] = '\n';
    return (dest);
}
