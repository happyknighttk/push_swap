#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
// Stack
typedef struct s_stack_node
{
	int					number;
	int					index;
	struct s_stack_node	*next;
}	t_stack_node;

// Src

// Sort

// Libft
int				ft_atoi(const char *str);
int				ft_isdigit(int c);
void			ft_lstadd_back(t_stack_node **alst, t_stack_node *new);
t_stack_node	*ft_lstlast(t_stack_node *lst);
t_stack_node	*ft_lstnew(void *content);
int				ft_lstsize(t_stack_node *lst);
void			ft_putendl_fd(char *s, int fd);
char			**ft_split(char const *s, char c);
size_t			ft_strlen(const char *s);
void			ft_putstr_fd(char *s, int fd);
char			*ft_strchr(const char *s, int c);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strdup(const char *s1);
size_t			ft_strlcpy(char *dst, const char *src, size_t dstsize);



#endif