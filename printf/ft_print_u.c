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

static	void	convertion(unsigned int g)
{
	char	n;

	n = 48 + g;
	ft_putchar(n);
}

static	unsigned int	nbr_figure(unsigned int n)
{
	unsigned int	count;

	count = 0;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

unsigned int	ft_print_u(unsigned int nb)
{
	unsigned int	o;
	unsigned int	p;

	if ((nb >= 0) && (nb < 10))
		convertion(nb);
	else
	{
		o = nb / 10;
		p = nb % 10;
		ft_print_u(o);
		convertion(p);
	}
	return (nbr_figure(nb));
}
