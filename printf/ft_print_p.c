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

static	int	rev_print(char *str)
{
	int	i;
	int	t;

	i = 0;
	t = 0;
	while (str[i])
		i++;
	t = i;
	while (i >= 0)
	{
		ft_putchar(str[i]);
		i--;
	}
	return (t);
}

int	ft_print_p(int nbr)
{
	char	*str;
	int		rest;
	int		i;

	i = 0;
	rest = 0;
	str = malloc(13 * sizeof(char));
	if (!str)
		return (0);
	while (nbr != 0)
	{
		rest = nbr % 16;
		if (rest < 10)
			str[i++] = 48 + rest;
		else if (rest >= 10)
			str[i++] = 55 + rest;
		nbr = nbr / 16;
	}
	str[i] = '\0';
	ft_putchar('0');
	ft_putchar('x');
	rest = rev_print(str);
	return (rest);
}
