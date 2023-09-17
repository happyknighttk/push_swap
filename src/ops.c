/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkayis <tkayis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 19:08:32 by tkayis            #+#    #+#             */
/*   Updated: 2023/09/17 21:31:10 by tkayis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sa(t_stack_node *stack_a)
{
	int	tmp;
	int	a;

	a = ft_lstsize(stack_a);
	if (a <= 1)
		return ;
	if (stack_a && stack_a->next)
	{
		tmp = stack_a->number;
		stack_a->number = stack_a->next->number;
		stack_a->next->number = tmp;
	}
	ft_putstr_fd("sa\n", 1);
}

void	rra(t_stack_node **stack_a)
{
	t_stack_node	*tmp;
	t_stack_node	*next_null;
	t_stack_node	*tmp2;
	int				a;

	a = ft_lstsize(*stack_a);
	if (a <= 1)
		return ;
	tmp2 = *stack_a;
	tmp = ft_lstlast(*stack_a);
	while ((*stack_a)->next)
	{
		next_null = *stack_a;
		*stack_a = (*stack_a)->next;
	}
	tmp->next = tmp2;
	next_null->next = NULL;
	ft_putstr_fd("rra\n", 1);
}

void	pa(t_stack_node **stack_a, t_stack_node **stack_b)
{
	t_stack_node	*temp;
	int				s;

	s = ft_lstsize(*stack_b);
	if (s <= 0)
		return ;
	temp = *stack_b;
	*stack_b = (*stack_b)->next;
	temp->next = *stack_a;
	*stack_a = temp;
	ft_putstr_fd("pa\n", 1);
}

void	pb(t_stack_node **stack_a, t_stack_node **stack_b)
{
	t_stack_node	*temp;
	int				s;

	s = ft_lstsize(*stack_a);
	if (s <= 0)
		return ;
	temp = *stack_a;
	*stack_a = (*stack_a)->next;
	temp->next = *stack_b;
	*stack_b = temp;
	ft_putstr_fd("pb\n", 1);
}

void	ra(t_stack_node **stack_a)
{
	t_stack_node	*tmp;
	t_stack_node	*last;

	tmp = *stack_a;
	*stack_a = (*stack_a)->next;
	last = ft_lstlast(*stack_a);
	last->next = tmp;
	tmp->next = NULL;
	ft_putstr_fd("ra\n", 1);
}
