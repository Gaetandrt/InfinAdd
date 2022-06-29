/*
** EPITECH PROJECT, 2021
** Day07
** File description:
** Task02
*/

int my_putstr(char *dest);

char *my_strcat(char *dest , char const *src)
{
    int a = 0;
    int cpt = 0;

    a = my_putstr(dest);

    while (src[cpt] != '\0') {
        dest[a] = src[cpt];
        cpt++;
        a++;
    }
    return (dest);
}

int my_putstr(char *dest)
{
    int i = 0;

    while (dest[i] != '\0') {
        i++;
    }
    return (i);
}
