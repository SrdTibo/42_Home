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
#include <stdarg.h>

#ifndef LIBFT_H
# define LIBFT_H

void			ft_putchar(char c);
int				ft_print_c(char c);
int				ft_print_s(char *c);
int				ft_print_d(int nbr);
int				ft_print_i(int nbr);
unsigned int	ft_print_u(unsigned	int nb);
int				ft_print_modulo(void);
int				print_x(int nbr);
int				print_xbis(int nbr);
int				ft_print_p(int nbr);
int				ft_printf(const char *, ...);

#endif