/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tserdet <tserdet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 10:20:36 by tserdet           #+#    #+#             */
/*   Updated: 2022/12/15 15:10:43 by tserdet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <signal.h>

void display()
{
	write(1 , "1\n", 1);
}

int main()
{
	int	pid;

	pid = getpid();
	printf("Server PID = %d\n", pid);
	printf("waiting...\n");
	signal(SIGUSR1,	display);
	signal(SIGUSR2,	display);
	while (1)
		continue;
	return (0);
}