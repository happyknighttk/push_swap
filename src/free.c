#include "../inc/push_swap.h"

void	free_str(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	while (i >= 0)
		free(str[i--]);
	free(str);
}

void	free_stack(t_stack_node **stack)
{
	t_stack_node	*tmp;
	t_stack_node	*delete;

	temp = *stack;
	while (temp)
	{
		delete = temp;
		temp = temp->next;
		free(delete);
	}
	free(stack);
}