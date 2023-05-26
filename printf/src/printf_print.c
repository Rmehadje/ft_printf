/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 18:19:14 by rmehadje          #+#    #+#             */
/*   Updated: 2023/05/26 19:00:52 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

int	ft_print_c(int c, int count)
{
	write(1, &c, 1);
	count++;
	return (count);
}

int	ft_print_s(char *s)
{
	int	i;

	i = 0;
	if (s == NULL)
	{
		s = "(null)";
	}
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
	return (i);
}

int	ft_digit(unsigned long nb)
{
	int	x;

	x = 0;
	if (nb == 0)
		return (1);
	while (nb != 0)
	{
		nb = nb / 10;
		x++;
	}
	return (x);
}

int	ft_print_nb(int nb)
{
	unsigned int	i;
	int				count;

	count = 0;
	if (nb < 0)
	{
		ft_print_c('-', 1);
		count++;
		nb *= -1;
	}
	i = (unsigned int) nb;
	if (i >= 10)
	{
		ft_print_nb(i / 10);
		ft_print_nb(i % 10);
	}
	else
		ft_print_c(i + '0', count);
	count += ft_digit(i);
	return (count);
}

int	ft_print_u(unsigned int u)
{
	int	count;

	count = 0;
	if (u >= 10)
	{
		ft_print_u(u / 10);
		ft_print_u(u % 10);
	}
	else
		ft_print_c(u + '0', count);
	count = ft_digit(u);
	return (count);
}
