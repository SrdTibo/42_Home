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
	if (n <= 0)
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

char	*strcpyy(char *dest, char *src)
{
	int		i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*cas_part(char	*str, int	m)
{
	if (m == 0 || m == -0)
	{
		str = malloc(sizeof(char) * 2);
		if (str == NULL)
			return(0);
		strcpyy(str, "0");
	}
	if (m == -2147483648)
	{
		str = malloc(sizeof(char) * 12);
		if (str == NULL)
			return(0);
		strcpyy(str, "-2147483648");
	}
	return(str);
}

char *ft_itoa(int m)
{
	char *str;
	int	c;
	int	i;

	i = nombre_chiffre(m);
	if (m == 0 || m == -0 || m == -2147483648)
		str = cas_part(str, m);
	else
	{
		str = malloc(sizeof(char) * nombre_chiffre(m) + 1);
		if (str == NULL)
			return(0);
		str[i] = '\0';
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
	}
	return(str);
}