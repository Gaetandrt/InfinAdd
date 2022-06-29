/*
** EPITECH PROJECT, 2021
** mt_str_isaplha
** File description:
** my str is alpha
*/

int my_str_isalpha(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' &&
        str[i] <= 'z') || (str[i] >= '0' && str[i] <= '9')) {
            i++;
        }
        else {
            return (0);
        }
    }
    return (1);
}
