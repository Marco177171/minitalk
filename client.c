/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 13:56:27 by masebast          #+#    #+#             */
/*   Updated: 2022/05/27 17:51:23 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	message_received(int sig)
{
	if (sig == SIGUSR2)
		ft_printf("Message received by server\n");
	exit(0);
}

void	ft_message(int pid, char c)
{
	int	i;

	i = 7;
	while (i >= 0)
	{
		if ((c >> i) & 1)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(50);
		i--;
	}
}

int	main(int argc, char *argv[])
{
	int	i;
	int	pid;

	if (argc != 3)
	{
		ft_printf("error\n");
		return (0);
	}
	pid = ft_atoi(argv[1]);
	signal(SIGUSR2, message_received);
	i = 0;
	while (argv[2][i] != '\0')
	{
		ft_message(pid, argv[2][i]);
		i++;
	}
	ft_message(pid, '\0');
	return (0);
}
