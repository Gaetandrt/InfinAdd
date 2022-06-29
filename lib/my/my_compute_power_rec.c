/*
** EPITECH PROJECT, 2021
** Day05
** File description:
** Task04
*/

int my_compute_power_rec(int nb , int p)
{
    int a = 0;

    if (p < 0) {
        return (0);
    }
    if (p == 0) {
        return (1);
    }
    if (p > 12) {
        return (0);
    }
    return (nb * my_compute_power_rec(nb , p - 1));
}
