/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 13:56:39 by masebast          #+#    #+#             */
/*   Updated: 2022/05/27 17:43:56 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	action(int sig, siginfo_t *info, void *context)
{
	static char	c = 0;
	static int	i = 0;

	(void) context;
	if (sig == SIGUSR1)
		c |= 1;
	else
		c |= 0;
	if (++i == 8)
	{
		i = 0;
		if (c == '\0')
		{
			kill(info->si_pid, SIGUSR2);
			return ;
		}
		ft_printf("%c", c);
		c = 0;
		return ;
	}
	else
		c <<= 1;
}

int	main(void)
{
	struct sigaction	sa;
	int					pid;

	pid = getpid();
	ft_printf("PID: %d\n", pid);
	sa.sa_sigaction = action;
	sigemptyset(&sa.sa_mask);
	sa.sa_flags = SA_SIGINFO;
	sigaction(SIGUSR1, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);
	while (1)
		pause();
	return (0);
}
