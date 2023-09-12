
#include "../include/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack_node	**a;
	t_stack_node	**b;

	if (argc < 2)
		return (-1);

	check_args(argc, argv);
	
	a = (t_stack_node **)malloc(sizeof(t_stack_node));
	b = (t_stack_node **)malloc(sizeof(t_stack_node));
	*a = NULL;
	*b = NULL;
	init_stacks(a, argc, argv);
	if ()
	{
		
	}
	free_stack(&a);
	free_stack(&b);

}



