#include "ft_printf.h"

void ft_putstr(char *str, int *len)
{
    if (!str)
        return;
    int i;
    i = 0;
    while(str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
    (*len)++;
}
