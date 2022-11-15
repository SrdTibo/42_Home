/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tserdet <tserdet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 16:16:12 by tserdet           #+#    #+#             */
/*   Updated: 2022/11/02 09:23:31 by tserdet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int nombre_chiffre(n)
{
   	int count;

	count = 0;
	if (n < 0)
	{
		count++;
		n = n * -1;
	}
   	while(n!=0)  
   	{  
   	    n=n/10;  
   	    count++;
   	}
	return(count);
} 

char	convertion(int p)
{
	char	n;

	n = 48 + p;
	return(n);
}

char *ft_itoa(int m)
{
	char *str;
	int	c;
	int	i;

	i = nombre_chiffre(m);
	str = malloc(sizeof(char) * nombre_chiffre(m) + 1);
	str[i] = '\0';
	if (str == NULL)
		return(0);
	if (m < 0)
		{
			str[0] = '-';
			m = m * -1;
		}
	while(m > 0)
	{
		c = m % 10;
		str[--i] = convertion(c);
		m = (m - c) / 10; //http://villemin.gerard.free.fr/aInforma/081Chiff.htm
	}
	return(str);
}