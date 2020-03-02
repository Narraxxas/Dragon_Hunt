/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** contain all of lib prototypes
*/

#ifndef MY_H_
# define MY_H_

#include <stdarg.h>

typedef struct s_flags {
    char *str;
    void (*ptr)(va_list);
}flags_t;

int my_printf(char *buffer, ...);
flags_t *set_flags(void);
void print_nb(va_list ap);
void print_char(va_list ap);
void print_dec(va_list ap);
void print_oct(va_list ap);
void print_bin(va_list ap);
int size_ind(char *buffer, int i);
int my_printf(char *buffer, ...);
unsigned int my_pow(unsigned int nb, unsigned int p);
void convert_base(unsigned int nb, int base);
unsigned int my_put_dec(unsigned int nb);
int p_car(int digit);
int carried(int digit);
int c_to_d(char charac);
char d_to_c(int digit);
char *clean_zero(char *str);
void my_put_float_2(float nbr, int nbo, char **argv);
int my_char_is_alphanum(char c);
int my_char_isnum(char c);
int my_strlen_no_space(char *str);
float frequency(int nbo, char **argv);
void my_put_positif_nb(int nb);
int error_case(int argc, char **argv);
void display(int y, int nbo, char **argv);
int my_char_isalpha_min(char c);
int my_char_isalpha_maj(char c);
int my_char_isalpha(char c);
char * minimize_string(char *str);
int finder(char *str, int argc, char **argv);
int my_is_prime(int nb);
int my_showmem(char const *str, int size);
char *my_strcat(char *dest, char *src);
char *my_strstr(char *str, char const *to_find);
int my_isneg(int n);
int my_showstr(char const *str);
int my_strcmp(char const *s1, char const *s2);
char *my_strupcase(char *str);
void my_print_params(int argc, char **argv);
void my_sort_int_array(int *tab, int size);
char *my_strcpy(char *dest, char const *src);
void my_swap(int *a , int *b);
char *concat_params(int argc, char **argv);
int my_put_nbr(int nb);
int my_str_isalpha(char const *str);
char *my_strdup(char const *src);
void my_putchar(char c);
int my_str_islower(char const *str);
int my_strlen(char const *str);
int my_compute_power_rec(int nb, int p);
int my_putstr(char const *str);
int my_str_isnum(char const *str);
char *my_strlowcase(char *str);
int my_compute_square_root(int nb);
void my_rev_params(int argc, char **argv);
int my_str_isupper(char const *str);
int my_strncmp(char const *s1, char const *s2, int n);
int my_getnbr(char *str);
int my_show_word_array(char * const *tab);
char *my_strcapitalize(char *str);
char *my_strncpy(char *dest, char const *src, int n);
int my_find_prime_sup(int nb);
char *my_revstr(char *str);
int my_str_isprintable(char const *str);
char *my_strncat(char *dest, char *src, int nb);

#endif
