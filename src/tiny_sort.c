/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tiny_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkayis <tkayis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 19:08:46 by tkayis            #+#    #+#             */
/*   Updated: 2023/09/17 21:36:29 by tkayis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_find(t_stack_node *stack_a)
{
	if (stack_a->index == 0 || stack_a->index == 1)
		return (0);
	return (1);
}

void	ft_five_sorter(t_stack_node **stack_a, t_stack_node **stack_b)
{
	while (ft_lstsize(*stack_a) > 3)
	{
		if (ft_find(*stack_a) == 0)
			pb(stack_a, stack_b);
		else
			ra(stack_a);
	}
	if ((*stack_a)->index == 4)
		ra(stack_a);
	if ((*stack_a)->next->index == 4)
		rra(stack_a);
	if ((*stack_a)->index == 3)
		sa(*stack_a);
	pa(stack_a, stack_b);
	pa(stack_a, stack_b);
	if ((*stack_a)->index == 1)
		sa(*stack_a);
}

void	ft_three_sorter(t_stack_node **stack_a)
{
	if ((*stack_a)->index == 2)
		ra(stack_a);
	if ((*stack_a)->next->index == 2)
		rra(stack_a);
	if ((*stack_a)->index == 1)
		sa(*stack_a);
}
