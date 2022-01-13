/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbyeon <jbyeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 16:06:24 by jbyeon            #+#    #+#             */
/*   Updated: 2022/01/13 17:06:21 by jbyeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h"

int	parse(int argc, char **argv)
{
	int	i;

	if (argc != 5 && argc != 6)
		return (error("[Error] wrong number of arguments.\n"));
	i = 1;
	while (i < argc)
	{
		if (check_argument_int(argv[i]) == FALSE)
			return (error("[Error] wrong argument type.\n"));
		i++;
	}
	return (TRUE);
}
