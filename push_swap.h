#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

//# include <unistd.h>
//# include <stdlib.h>

typedef struct s_stack_node
{
	int					number;
	int					index;
	struct s_stack_node	*next;
}	t_stack_node;

#endif