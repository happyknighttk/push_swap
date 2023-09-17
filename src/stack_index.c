/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_index.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkayis <tkayis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 19:08:27 by tkayis            #+#    #+#             */
/*   Updated: 2023/09/17 21:37:51 by tkayis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static	t_stack_node	*which_next_min(t_stack_node **stack)
{
	t_stack_node	*head;
	t_stack_node	*min;
	int				min_index;

	min = 0;
	min_index = 1;
	head = *stack;
	if (head)
	{
		while (head)
		{
			if ((head->index == -1) && (min_index
					|| head->number < min->number))
			{
				min = head;
				min_index = 0;
			}
			head = head->next;
		}
	}
	return (min);
}

void	stack_index(t_stack_node **stack)
{
	t_stack_node	*head;
	int				index;

	index = 0;
	head = which_next_min(stack);
	while (head)
	{
		head->index = index;
		index++;
		head = which_next_min(stack);
	}
}
