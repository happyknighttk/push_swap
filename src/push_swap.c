
#include "../include/push_swap.h"

static void	ft_check_and_stack(t_stack_node **stack, int ac, char **av)
{
	t_stack_node	*new;
	char			**args;
	int				i;
	char			*str;

	str = 0;
	i = 1;
	while (i < ac)
	{
		str = ft_join_strings(str, av[i]);
		str = ft_join_strings(str, " ");
		i++;
	}
	args = ft_split_1(str, ' ');
	i = 0;
	while (args[i])
	{
		new = ft_lstnew(ft_tatoi(args[i]));
		ft_lstadd_back(stack, new);
		i++;
	}
	ft_free_split(args);
	free(str);
	stack_index(stack);
}

int	ft_sorted_checker(t_stack_node *stack_a)
{
	int		i;

	i = stack_a->number;
	while (stack_a)
	{
		if (i > stack_a->number)
			return (0);
		i = stack_a->number;
		stack_a = stack_a->next;
	}
	return (1);
}

static void	sort_stack(t_stack_node **stack_a, t_stack_node **stack_b)
{
	int	size;

	size = ft_lstsize((t_stack_node *) *stack_a);
	if (size == 2)
		sa(*stack_a);
	else if (size == 3)
		ft_three_sorter(stack_a);
	else if (size == 5)
		ft_five_sorter(stack_a, stack_b);
	else
		radix_sort(stack_a, stack_b);
}

void	check_whitespace(char **str)
{
	int	i;
	int	j;
	int	flag;

	i = 1;
	flag = 0;
	while (str[i])
	{
		j = 0;
		while (str[i][j])
		{
			if (ft_isdigit(str[i][j]))
			{
				flag = 1;
				break ;
			}
			j++;
		}
		if (flag == 0)
		{
			ft_putstr_fd("Error\n", 2);
			exit(1);
		}	
		flag = 0;
		i++;
	}
}

int	main(int ac, char **av)
{
	t_stack_node	**stack_a;
	t_stack_node	**stack_b;
	int		i;

	if (ac < 2)
		return (0);
	check_whitespace(av);
	stack_a = (t_stack_node **)malloc(sizeof(t_stack_node));
	stack_b = (t_stack_node **)malloc(sizeof(t_stack_node));
	*stack_a = 0;
	*stack_b = 0;
	i = 1;
	while (av[i])
	{
		if (av[i][0] == '\0')
			ft_putstr_fd("Error\n", 2);
		i++;
	}
	ft_check_and_stack(stack_a, ac, av);
	ft_duplic_checker(*stack_a);
	if (ft_sorted_checker(*stack_a))
		return (0);
	sort_stack(stack_a, stack_b);
	return (0);
}
