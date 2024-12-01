/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozahnou <mozahnou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 21:38:25 by mozahnou          #+#    #+#             */
/*   Updated: 2024/12/01 21:46:30 by mozahnou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
void	ft_putchar(char c, int *ret);
void	ft_putstr(char *str, int *ret);
void	ft_putnbr(long nb, int *ret);
void	ft_puthexa(unsigned int n, char t, int *ret);
void	ft_putpexa(unsigned long num, int *ret);

#endif
