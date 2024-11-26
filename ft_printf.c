#include "ft_printf.h"

static void check(char t, va_list arg, int *len)
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
	else if(t == 'x' || t == 'X')
		ft_puthexa(va_arg(arg, int), t, len);
	else if (t == 'p')
	{
		ft_putstr("0x", len);
		ft_puthexa(va_arg(arg, size_t), t, len);
	}
    else
        ft_putchar(t, len);
}

int ft_printf(const char *str, ...)
{
    int i;
    int ret;
    va_list arg;
 
    i = 0;
    ret = 0;
	if(!str)
		return (0);
    va_start(arg, str);
    while(str[i])
    {
        if(str[i] == '%')
		{
			check(str[i + 1], arg, &ret);
			i++;
		}
        else
            ft_putchar((char)str[i], &ret);
        i++;
    }
    va_end(arg);
    return (ret);
}
