/*
** EPITECH PROJECT, 2021
** my_lib
** File description:
** my
*/

#ifndef MY_H
    #define MY_H
void my_putchar(char c);
char *my_strstr(char *str, char const *to_find);
int my_isneg(int nb);
int my_put_nbr(int nb);
int my_strncmp(char const *s1, char const *s2, int n);
void my_swap(int *a, int *b);
char *my_strupcase(char *str);
int my_putstr(char const *str, int i);
char *my_strlowcase(char *str);
int my_strlen(char *str);
char *my_strcapitalize(char *str);
int my_getnbr(char const *str);
int my_str_isalpha(char const *str);
void my_sort_int_array(int *tab, int size);
int my_str_isnum(char const *str);
int my_compute_power_rec(int nb, int power);
int my_str_islower(char const *str);
int my_compute_square_root(int nb);
int my_str_isupper(char const *str);
int my_is_prime(int nb);
int my_str_isprintable(char const *str);
int my_find_prime_sup(int nb);
int my_showstr(char const *str);
char *my_strcpy(char *dest, char const *src);
int my_showmem(char const *str, int size);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strcat(char *dest, char const *src);
char *my_revstr(char *str);
char *my_strncat(char *dest, char const *src, int nb);
char *result_size(char **argv);
char *my_result_write(int nbr);
int less_calculate(char **argv);
int my_longest_str(char **argv);
char *nbr1_cpy_little(char **argv);
char *nbr1_cpy(char **argv);
char *nbr2_cpy_little(char **argv);
char *nbr2_cpy(char **argv);
void my_add_str_positive(char **argv);
char *nbr_equal(char **argv, char *result);
char *nbr1_longgest(char **argv, char *result);
char *nbr2_longgest(char **argv, char *result);
int cnv_dec(char str);
void my_result_print(char *str);
void my_putstr_dopped(char *str, int i);
void if_two_negat(char **argv);
void what_is_my_sign(char **argv);
int my_strcmp(char *s1, char *s2);
int nbr2_negativ(char **argv);
int nbr1_negativ(char **argv);
char if_one_negativ(char **argv);
#endif
