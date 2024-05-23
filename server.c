/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkott <dkott@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:14:32 by dkott             #+#    #+#             */
/*   Updated: 2024/05/23 15:27:25 by dkott            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

t_servdata	*g_data;

void	init_data(t_servdata *data)
{
	data->bits = 0;
	data->message = ft_strnew(0);
	if (!data->message)
		(free(data), exit(1));
	data->incoming_c = ft_strnew(1);
	if (!data->incoming_c)
		(free(data->message), free(data), exit(1));
}

void	exit_safe(int signal)
{
	if (signal == SIGINT && g_data)
	{
		if (g_data->message)
			free(g_data->message);
		if (g_data->incoming_c)
			free(g_data->incoming_c);
		free(g_data);
		exit(1);
	}
}

char	*cat_message(char *message, char *c)
{
	char	*new_msg;

	if (!message || !c)
		return (NULL);
	new_msg = ft_strnew(ft_strlen(message) + ft_strlen(c));
	if (!new_msg)
		return (NULL);
	ft_strcat(new_msg, message);
	ft_strcat(new_msg, c);
	free(message);
	return (new_msg);
}

void	reception(int signal)
{
	if (signal != SIGUSR1 && signal != SIGUSR2)
		return ;
	if (signal == SIGUSR1)
		g_data->incoming_c[0] |= (0x01 << g_data->bits);
	g_data->bits++;
	if (g_data->bits == 8)
	{
		if (g_data->incoming_c[0] == '\0')
		{
			ft_printf("%s\n", g_data->message);
			ft_bzero(g_data->message, ft_strlen(g_data->message));
		}
		g_data->message = cat_message(g_data->message, g_data->incoming_c);
		g_data->incoming_c[0] = 0;
		g_data->bits = 0;
	}
}

int	main(void)
{
	signal(SIGINT, exit_safe);
	g_data = (t_servdata *)malloc(sizeof(t_servdata));
	init_data(g_data);
	ft_printf("Welcome to dkott's server.\nIts PID is: %d.\n", getpid());
	signal(SIGUSR1, reception);
	signal(SIGUSR2, reception);
	while (1)
		pause ();
	if (g_data->message)
		free(g_data->message);
	if (g_data->incoming_c)
		free(g_data->incoming_c);
	if (g_data)
		free(g_data);
	exit(0);
}
