/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozahnou <mozahnou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 15:50:12 by mozahnou          #+#    #+#             */
/*   Updated: 2024/12/01 21:46:46 by mozahnou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(long nb, int *ret)
{
	if (nb == -2147483648)
		ft_putstr("-2147483648", ret);
	else if (nb < 0)
	{
		ft_putchar('-', ret);
		nb = -nb;
		ft_putnbr(nb, ret);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10, ret);
		ft_putnbr(nb % 10, ret);
	}
	else
		ft_putchar(nb + 48, ret);
}
