/*
** EPITECH PROJECT, 2021
** Day05
** File description:
** Task05
*/

//if (nb > 1316134911) {
//    return (0);
//}
int my_compute_square_root(int nb)
{
    int b = 0;
    int result = 0;

    if (nb == 1) {
        return (1);
    }
    if (nb <= 0) {
        return (0);
    }
    for (int a = 0; result != nb; a++) {
        b++;
        result = a * b;
        if (result == nb) {
            return (a);
        }
    }
    return (0);
}
