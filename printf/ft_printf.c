/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tserdet <tserdet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:45:57 by tserdet           #+#    #+#             */
/*   Updated: 2022/10/31 16:21:07 by tserdet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
//http://drmdh.free.fr/stad/SoftDir/C/Cours/cours13.htm
int	launch_function(va_list args, char str)
{
	if (str == 'c')
		return (ft_print_c(va_arg(args, int)));
	else if (str == 's')
		return (ft_print_s(va_arg(args, char *)));
	else if (str == 'p')
		return (ft_print_p(va_arg(args, int)));
	else if (str == 'd')
		return (ft_print_d(va_arg(args, int)));
	else if (str == 'i')
		return (ft_print_i(va_arg(args, int)));
	else if (str == 'u')
		return (ft_print_u(va_arg(args, unsigned int)));
	else if (str == 'x')
		return (ft_print_x(va_arg(args, int)));
	else if (str == 'X')
		return (ft_print_xbis(va_arg(args, int)));
	else if (str == '%')
		return (ft_print_modulo());
	return(-1);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		compt;

	i = 0;
	compt = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] != '%')
			ft_putchar(str[i]);
		else if (str[i] == '%')
		{
			compt += launch_function(args, str[i + 1]);
			i++;
		}
		i++;
	}
	va_end(args);
	return (compt);
}