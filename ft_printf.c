#include "ft_printf.h"

void check(char t, va_list arg, int *i, int *len)
{
    if(t == 'c')
        ft_putchar(va_arg(arg, int), len);
    else if (t == 's')
        ft_putstr(va_arg(arg, char*), len);
    else if(t == '%')
        ft_putchar('%', len);
    else if(t == 'd' || t == 'i')
        ft_putnbr(va_arg(arg, int), len);
	else if(t == 'u')
		ft_putnbr(va_arg(arg, unsigned int), len);
    else
        ft_putchar(t, len);
    (*i)++;
    return;
}

int ft_printf(const char *str, ...)
{
    int i;
    int ret;
    va_list arg;
 
    i = 0;
    ret = 0;
    va_start(arg, str);
    while(str[i])
    {
        if(str[i] == '%')
            check(str[i + 1], arg, &i, &ret);
        else
            ft_putchar((char)str[i], &ret);
        if(*(str + i))
            i++;
    }
    va_end(arg);
    return (ret);
}
