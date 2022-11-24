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

#include "libftprintf.h"

static	void	convertion(int p)
{
	char	n;

	n = 48 + p;
	ft_print_c(n);
}

static	int	nbr_figure(int n)
{
	int	count;

	count = 0;
	if (n <= 0)
	{
		count++;
		n = n * -1;
	}
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

int	ft_print_i(int nb)
{
	int	o;
	int	p;

	if (nb < 0)
	{
		ft_print_c('-');
		nb = nb * -1;
	}
	if ((nb > -1) && (nb < 10))
		convertion(nb);
	else
	{
		o = nb / 10;
		p = nb % 10;
		ft_print_i(o);
		convertion(p);
	}
	return (nbr_figure(nb));
}
