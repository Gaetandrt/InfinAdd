/*
** EPITECH PROJECT, 2021
** my_str_islower
** File description:
** my_str_islower
*/

int my_str_islower(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] <= 97 && str[i] >= 122) {
            return (0);
        }
        i++;
    }
    return (1);
}
