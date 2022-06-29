/*
** EPITECH PROJECT, 2021
** Day06
** File description:
** Task03
*/

int my_strlen(char const *str);

char *my_revstr(char *str)
{
    char tmp[my_strlen(str)+ 1 ];
    int nbrc = 0;
    int i = my_strlen(str) - 1;

    tmp[(my_strlen(str))] = '\0';
    for (;str[nbrc] != '\0';) {
        tmp[i] = str[nbrc];
        i--;
        nbrc++;
    }
    nbrc--;
    while (str[i] != '\0') {
        str[i] = tmp[nbrc];
        i++;
        nbrc--;
    }
    return (str);
}

int my_strlen(char const *str)
{
    int x = 0;

    while (str[x] != '\0') {
        x += 1;
    }
    return (x);
}
