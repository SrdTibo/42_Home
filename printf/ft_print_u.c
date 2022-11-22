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

#include <unistd.h>
#include <stdlib.h>
#include "libftprintf.h"

void	convertion(unsigned int p)
{
	char	n;

	n = 48 + p;
	ft_printt_c(n);
}

unsigned int	nbr_figure(unsigned int n)
{
	unsigned int	count;

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

unsigned int	ft_printt_c(char c)
{
	write(1, &c, 1);
	return(1);
}

unsigned int	ft_print_u(unsigned int nb)
{
	unsigned int	o;
	unsigned int	p;

	if (nb < 0)
	{
		ft_printt_c('-');
		nb = nb * -1;
	}
	if ((nb > -1) && (nb < 10))
		convertion(nb);
	else
	{
		o = nb / 10;
		p = nb % 10;
		ft_print_u(o);
		convertion(p);
	}
	return(nbr_figure(nb));
}

int main(void)
{
	ft_print_u((unsigned int)44);
	return 0;	
}