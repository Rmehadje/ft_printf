/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 15:42:24 by rmehadje          #+#    #+#             */
/*   Updated: 2023/05/26 18:56:51 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_print_c(int c, int count);
int		ft_print_s(char *s);
int		ft_print_nb(int nb);
int		ft_print_u(unsigned int u);
int		ft_printcheck(const char *s, int i, va_list list, int count);
int		ft_printf(const char *s, ...);
int		ft_digit(unsigned long nb);
int		ft_dtohexad(unsigned int decimalnb);
int		ft_dtohexade(unsigned int decimalnb);
void	ft_print_myhex(char *str, int i);
int		ft_print_p(unsigned long nb);
int		ft_pointer(unsigned long decimalnb);

#endif