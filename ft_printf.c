/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozahnou <mozahnou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 15:48:01 by mozahnou          #+#    #+#             */
/*   Updated: 2024/12/05 01:35:25 by mozahnou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	check(char t, va_list arg, int *ret)
{
	if (t == 'c')
		ft_putchar(va_arg(arg, int), ret);
	else if (t == 's')
		ft_putstr(va_arg(arg, char *), ret);
	else if (t == '%')
		ft_putchar('%', ret);
	else if (t == 'd' || t == 'i')
		ft_putnbr(va_arg(arg, int), ret);
	else if (t == 'u')
		ft_putnbr(va_arg(arg, unsigned int), ret);
	else if (t == 'x' || t == 'X')
		ft_puthexa(va_arg(arg, unsigned int), t, ret);
	else if (t == 'p')
	{
		ft_putstr("0x", ret);
		ft_putpexa(va_arg(arg, unsigned long), ret);
	}
	else
		ft_putchar(t, ret);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		ret;
	va_list	arg;

	i = 0;
	ret = 0;
	if (!str)
		return (0);
	va_start(arg, str);
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1])
		{
			check(str[i + 1], arg, &ret);
			i++;
		}
		else if (str[i] != '%')
			ft_putchar((char)str[i], &ret);
		i++;
	}
	va_end(arg);
	return (ret);
}
