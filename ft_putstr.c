#include "ft_printf.h"

void ft_putstr(char *str, int *len)
{
    if (!str)
	{
        write(1, "(null)", 6);
		return;
	}
    int i;
    i = 0;
    while(str[i])
    {
        ft_putchar(str[i], len);
        i++;
    }
    // (*len)++;
}
