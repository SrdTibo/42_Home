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
#include <stdio.h>

int ft_printf(const char *str, ...)
{
	int	i;
	int	compt;
	
	i = 0;
	compt = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
			compt++;
		i++;
	}
	return(compt);
}
int main (void)
{
		printf("%d", ft_printf("%d", "%d"));
}