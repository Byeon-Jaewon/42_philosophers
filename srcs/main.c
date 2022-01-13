/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbyeon <jbyeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 15:59:17 by jbyeon            #+#    #+#             */
/*   Updated: 2022/01/13 17:33:51 by jbyeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h"

int	main(int argc, char **argv)
{
	t_table	table;

	if (parse(argc, argv) == FALSE)
		return (FALSE);
	if (table_input(&table, argc, argv) == FALSE)
		return (FALSE);
	if (start_dining(&table, (&table)->philo) == FALSE)
		return (FALSE);
	return (TRUE);
}
