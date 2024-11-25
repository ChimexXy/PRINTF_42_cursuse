#include "ft_printf.h"

void ft_putchar(char c, int *len)
{
    write(1, &c, 1);
    (*len)++;
}