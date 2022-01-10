/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbyeon <jbyeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 16:06:24 by jbyeon            #+#    #+#             */
/*   Updated: 2022/01/10 15:03:13 by jbyeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h"

int	parse(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc != 5 && argc != 6)
		return (error("[Error] wrong arguments.\n"));
	while (i < argc)
	{
		if (check_argument_int(argv[i]) == FALSE)
			return (error("[Error] wrong argument type.\n"));
		i++;
	}
	printf("parse success");
	return (TRUE);
}
