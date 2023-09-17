/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkayis <tkayis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 19:08:50 by tkayis            #+#    #+#             */
/*   Updated: 2023/09/17 21:36:56 by tkayis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_free_split(char **split)
{
	int	i;

	if (split)
	{
		i = 0;
		while (split[i])
		{
			free(split[i]);
			i++;
		}
		free(split);
	}
}

void	ft_error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

static void	ft_check_arg(char *str)
{
	size_t	i;

	i = 0;
	if (!ft_isdigit(str[i]) && str[i] != '-' && str[i] != '+')
		ft_error();
	if ((str[i] == '-' || str[i] == '+') && !ft_isdigit(str[i + 1]))
		ft_error();
	i = 1;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			ft_error();
		i++;
	}
}

int	ft_tatoi(char *str)
{
	int		i;
	int		sign;
	long	res;

	i = 0;
	sign = 1;
	res = 0;
	ft_check_arg(str);
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		res = res * 10 + (str[i++] - '0');
		if (res > 2147483647)
			ft_error();
	}
	if ((res * sign) == 2147483648)
		ft_error();
	return ((int)res * sign);
}

void	ft_duplic_checker(t_stack_node *stack)
{
	t_stack_node	*now;
	t_stack_node	*after;
	int				value;

	now = stack;
	while (now)
	{
		value = now->number;
		after = now->next;
		while (after)
		{
			if (value == after->number)
				ft_error();
			after = after->next;
		}
		now = now->next;
	}
}
