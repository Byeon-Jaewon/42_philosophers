/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbyeon <jbyeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 16:01:12 by jbyeon            #+#    #+#             */
/*   Updated: 2022/01/07 16:23:56 by jbyeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h"

int	error(char *msg)
{
	printf("%s", msg);
	return (FALSE);
}
