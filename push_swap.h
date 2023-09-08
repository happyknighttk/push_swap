#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_push
{
	int				number;
	int				index;
	struct s_push	*next;
}	t_push;

#endif