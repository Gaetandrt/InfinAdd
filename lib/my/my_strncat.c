/*
** EPITECH PROJECT, 2021
** Day07
** File description:
** Task03
*/

int my_strlen(char *dest);

char *my_strncat(char *dest , char const *src , int nb)
{
    int a;
    int cpt = 0;
    a = my_strlen(dest);

    while (nb > 0) {
        dest[a] = src[cpt];
        nb--;
        cpt++;
        a++;
    }
    dest[a++] = '\0';
    return (dest);
}

int my_strlen(char *dest)
{
    int i = 0;

    while (dest[i] != '\0') {
        i++;
    }
    return (i);
}
