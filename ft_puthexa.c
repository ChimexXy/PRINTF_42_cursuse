/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozahnou <mozahnou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 15:50:08 by mozahnou          #+#    #+#             */
/*   Updated: 2024/12/06 15:45:18 by mozahnou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthexa(unsigned int n, char t, int *ret)
{
	char			*base;

	if (t == 'x')
		base = "0123456789abcdef";
	else if (t == 'X')
		base = "0123456789ABCDEF";
	if (n < 16)
		ft_putchar(base[n % 16], ret);
	else
	{
		ft_puthexa((n / 16), t, ret);
		ft_putchar(base[n % 16], ret);
	}
}

void	ft_putpexa(unsigned long num, int *ret)
{
	char	*base;

	base = "0123456789abcdef";
	if (num < 16)
		ft_putchar(base[num % 16], ret);
	else
	{
		ft_putpexa((num / 16), ret);
		ft_putchar(base[num % 16], ret);
	}
}
