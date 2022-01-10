/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbyeon <jbyeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 15:58:13 by jbyeon            #+#    #+#             */
/*   Updated: 2022/01/10 15:08:23 by jbyeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <pthread.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <sys/time.h>

# define TRUE 1
# define FALSE 0

typedef struct s_philo
{
	int				id;
	int				left_fork;
	int				right_fork;
	long long		check_die_time;
	int				eat_count;
	struct s_table	*table;
	pthread_t		thread_id;
}					t_philo;

typedef struct s_table
{
	int					number_of_philosopers;
	int					time_to_die;
	int					time_to_eat;
	int					time_to_sleep;
	int					number_of_times_each_philosopher_must_eat;
	int					die;
	int					eat_check;
	long long			start_time;
	pthread_mutex_t		*forks;
	pthread_mutex_t		eating;
	pthread_mutex_t		write;
	t_philo				*philo;
}				t_table;

int	parse(int argc, char **argv);

int	check_argument_int(char *s);

int	check_digit(char *s);

int	error(char *msg);

#endif