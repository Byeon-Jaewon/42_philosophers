/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbyeon <jbyeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 16:07:56 by jbyeon            #+#    #+#             */
/*   Updated: 2022/01/10 14:59:46 by jbyeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h"

int	ft_isdigit(int c)
{
	if (c > 47 && c < 58)
		return (TRUE);
	return (FALSE);
}

int	ft_atoi(const char *nptr)
{
	int		i;
	int		result;

	i = 0;
	result = 0;
	while (nptr[i])
	{
		if (ft_isdigit(nptr[i]) == FALSE)
			return (-1);
		result = 10 * result + (nptr[i] - '0');
		i++;
	}
	return (result);
}

int	check_argument_int(char *s)
{
	int		arg;

	arg = ft_atoi(s);
	if (arg < 0 || arg > 2147483647)
		return (FALSE);
	return (TRUE);
}

int	check_digit(char *s)
{
	int		i;

	i = 0;
	while (s[i])
	{
		if (ft_isdigit(s[i]) == FALSE)
			return (FALSE);
		i++;
	}
	return (TRUE);
}
