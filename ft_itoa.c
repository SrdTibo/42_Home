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
#include <stdlib.h>
int nombre_chiffre(n)
{
   	int count;

	count = 0;
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

char *ft_itoa(int n)
{
	char *str;
	int	o;
	int	p;
	int	i;

	i = 0;
	str = malloc(sizeof(char) * n);
	if (str == NULL)
		return(0);
	if (n < 0)
		{
			str[i] = '-';
			i++;
			n = n * -1;
		}
	while(i < nombre_chiffre(n))
	{
		if ((n >= 0) && (n < 10))
			str[i++] = convertion(n);
		else
		{
			o = n / 10;
			p = n % 10;
			str[i++] = convertion(p);
		}
	}
	return(str);
}
