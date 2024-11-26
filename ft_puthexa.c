#include "ft_printf.h"

void ft_puthexa(int num, char t, int *len)
{
	int n;
	char *base;

	n = num;
	if (t == 'x' || t == 'p')
		base = "0123456789abcdef";
	else if (t == 'X')
		base = "0123456789ABCDEF";
	if (n < 16)
		ft_putchar(base[n % 16], len);
	else
	{
		ft_puthexa((n / 16), t, len);
		ft_putchar(base[n % 16], len);
	}
}
