/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 16:47:59 by rmehadje          #+#    #+#             */
/*   Updated: 2023/05/26 18:57:59 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

int	ft_dtohexad(unsigned int decimalnb)
{
	int		i;
	int		remain;
	char	*s;
	char	*str;
	int		count;

	count = 0;
	str = "0123456789abcdef";
	i = 0;
	if (decimalnb == 0)
		return (ft_print_c('0', count), 1);
	s = malloc(ft_digit(decimalnb) + 1);
	while (decimalnb != 0)
	{
		remain = decimalnb % 16;
		s[i] = str[remain];
		i++;
		decimalnb /= 16;
	}
	s[i] = '\0';
	count = i;
	ft_print_myhex(s, i - 1);
	free(s);
	return (count);
}

int	ft_pointer(unsigned long decimalnb)
{
	int		i;
	int		remain;
	char	*s;
	char	*str;
	int		count;

	count = 0;
	str = "0123456789abcdef";
	i = 0;
	if (decimalnb == 0)
		return (ft_print_c('0', count), 1);
	s = calloc(ft_digit(decimalnb) + 1, 1);
	while (decimalnb != 0)
	{
		remain = decimalnb % 16;
		s[i] = str[remain];
		i++;
		decimalnb /= 16;
	}
	s[i] = '\0';
	count = i;
	ft_print_myhex(s, i - 1);
	free(s);
	return (count);
}

int	ft_dtohexade(unsigned int decimalnb)
{
	int		i;
	int		remain;
	char	*s;
	char	*str;
	int		count;

	count = 0;
	str = "0123456789ABCDEF";
	i = 0;
	if (decimalnb == 0)
		return (ft_print_c('0', count), 1);
	s = calloc(ft_digit(decimalnb) + 1, 1);
	while (decimalnb != 0)
	{
		remain = decimalnb % 16;
		s[i] = str[remain];
		i++;
		decimalnb /= 16;
	}
	s[i] = '\0';
	count = i;
	ft_print_myhex(s, i - 1);
	free(s);
	return (count);
}

void	ft_print_myhex(char *str, int i)
{
	while (i >= 0)
	{
		ft_print_c(str[i], 1);
		i--;
	}
}

int	ft_print_p(unsigned long nb)
{
	int	count;

	count = 2;
	ft_print_c('0', count);
	ft_print_c('x', count);
	count += ft_pointer(nb);
	return (count);
}
