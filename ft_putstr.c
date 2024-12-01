/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozahnou <mozahnou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 15:50:16 by mozahnou          #+#    #+#             */
/*   Updated: 2024/12/01 21:46:51 by mozahnou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *str, int *ret)
{
	int	i;

	i = 0;
	if (!str)
	{
		ft_putstr("(null)", ret);
		return ;
	}
	while (str[i])
	{
		ft_putchar(str[i], ret);
		i++;
	}
}
