/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 17:33:07 by rmehadje          #+#    #+#             */
/*   Updated: 2023/05/26 18:56:13 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

int	ft_printcheck(const char *s, int i, va_list list, int count)
{
	if (s[i] == 'c')
		count = ft_print_c((va_arg(list, int)), count);
	else if (s[i] == 's')
		count += ft_print_s((va_arg(list, char *)));
	else if (s[i] == 'd' || s[i] == 'i')
		count += ft_print_nb((va_arg(list, int)));
	else if (s[i] == 'u')
		count += ft_print_u((va_arg(list, unsigned int)));
	else if (s[i] == '%')
		count = ft_print_c('%', count);
	else if (s[i] == 'p')
		count += ft_print_p((va_arg(list, unsigned long)));
	else if (s[i] == 'x')
		count += ft_dtohexad((va_arg(list, unsigned int)));
	else if (s[i] == 'X')
		count += ft_dtohexade((va_arg(list, unsigned int)));
	return (count);
}

int	ft_printf(const char *s, ...)
{
	va_list	list;
	int		count;
	int		i;

	i = 0;
	count = 0;
	va_start(list, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			count = ft_printcheck(s, i, list, count);
			i++;
		}
		else
		{
			count = ft_print_c(s[i], count);
			i++;
		}
	}
	return (count);
}
