/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkott <dkott@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:35:49 by dkott             #+#    #+#             */
/*   Updated: 2024/05/23 15:27:09 by dkott            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	send_char(int serv_pid, char c)
{
	int	c_bits;

	c_bits = 0;
	while (c_bits < 8)
	{
		if ((c & (0x01 << c_bits)))
		{
			if (kill(serv_pid, SIGUSR1) < 0)
				(ft_printf("Kill failure with SIGUSR1.\n"), exit(1));
		}
		else
		{
			if (kill(serv_pid, SIGUSR2) < 0)
				(ft_printf("Kill failure with SIGUSR2.\n"), exit(1));
		}
		usleep(100);
		c_bits ++;
	}
}

void	check_pid(char *pid)
{
	size_t	pid_len;

	pid_len = 0;
	ft_intlen(ft_atoi(pid), &pid_len);
	if (ft_strlen(pid) != pid_len)
		(ft_printf("ERROR : this PID is not valid.\n"), exit(1));
}

int	main(int argc, char **argv)
{
	int	pid;
	int	i;
	int	msg_len;

	i = -1;
	msg_len = 0;
	pid = 0;
	if (argc != 3)
		(ft_printf("ERROR : wrong number of arguments.\n"), exit(1));
	check_pid(argv[1]);
	pid = ft_atoi(argv[1]);
	msg_len = ft_strlen(argv[2]);
	while (++i < (msg_len + 1))
		send_char(pid, argv[2][i]);
	return (0);
}
