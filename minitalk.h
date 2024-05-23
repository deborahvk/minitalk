/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkott <dkott@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:45:33 by dkott             #+#    #+#             */
/*   Updated: 2024/05/23 15:27:39 by dkott            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H
# define _GNU_SOURCE
# define END_TRANSMISSION '\0'

# include <signal.h>
# include <stdlib.h>
# include <unistd.h>
# include "libft.h"

typedef struct s_servdata
{
	char	*message;
	int		bits;
	char	*incoming_c;
}	t_servdata;

#endif