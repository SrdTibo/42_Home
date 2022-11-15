/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tserdet <tserdet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 16:10:27 by tserdet           #+#    #+#             */
/*   Updated: 2022/11/02 09:26:57 by tserdet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	t;
	char	*pointeur;

	pointeur = NULL;
	i = 0;
	t = 0;
	pointeur = (char *) malloc(sizeof(*s) * (len + 1));
	if (pointeur == NULL)
		return (0);
	while (s[i])
	{
		if (i >= start && t < len)
		{
			pointeur[t] = s[i];
			t++;
		}
		i++;
	}
	pointeur[t] = '\0';
	return (pointeur);
}
