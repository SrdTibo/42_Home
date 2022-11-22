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
#include "libftprintf.h"

int	ft_print_p(void *)
{
	int ft_strlength(char *str);
	int ft_error(char *str);

	int ft_strlength(char *str)
	{
		int i;

		i = 0;
		while (str[i] != '\0')
			i++;
		return (i);
	}

	int ft_error(char *str)
	{
		int i;
		int j;

		i = 0;
		j = 1;
		if (str[i] == 0 || ft_strlength(str) == 1)
			return (0);
		if (str[i] == '+' || str[i] == '-')
			return (0);
		while (i < (ft_strlength(str) - 1))
		{
			while (j < ft_strlength(str))
			{
				if (str[i] == str[j])
				return (0);
				j++;
			}
			i++;
			j = i + 1;
		}
		return (1);
	}

	void ft_putnbr_base(int nbr, char *base)
	{
		int j;
		int i;
		unsigned int resultat;
		unsigned int nombres;

		i = 0;
		resultat = 0;
		j = ft_strlength(base);
		if (ft_error(base) != 0)
		{
			if (nbr < 0)
			{
				write(1, "-", 1);
				nombres = -nbr;
			}
			else
				nombres = nbr;
			resultat = nombres % j;
			nombres = nombres / j;
			if (nombres != 0)
				ft_putnbr_base(nombres, base);
			write(1, &base[resultat], 1);
		}
	}
}

int main(void)
{
	char *a = "sdovuubsv";
	ft_print_s(a);
    return 0;
}
