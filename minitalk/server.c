/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tserdet <tserdet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 10:20:36 by tserdet           #+#    #+#             */
/*   Updated: 2022/12/15 14:40:41 by tserdet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <signal.h>

void display()
{
	write(1 , "1", 1);
}

int main()
{
	int	pid;

	pid = getpid();
	ft_printf("Server PID = %d\n", pid);
	ft_printf("waiting...\n");
	signal(SIGUSR1,	display);
	while (1)
		continue;
	return (0);
}