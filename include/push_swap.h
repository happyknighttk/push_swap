/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkayis <tkayis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 19:09:00 by tkayis            #+#    #+#             */
/*   Updated: 2023/09/17 17:30:39 by tkayis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
char				*ft_join_strings(char *s1, char *s2);
int					ft_tatoi(char *str);
void				ft_duplic_checker(t_stack_node *stack);
char				**ft_split_1(char const *s, char c);
void				ft_free_split(char **split);
void				stack_index(t_stack_node **stack);
int					ft_sorted_checker(t_stack_node *stack_a);
int					ft_find(t_stack_node *stack_a);

// Sort
void				radix_sort(t_stack_node **stack_a, t_stack_node **stack_b);
void				ft_three_sorter(t_stack_node **stack_a);
void				ft_five_sorter(t_stack_node **stack_a, t_stack_node **stack_b);
void				pa(t_stack_node **stack_a, t_stack_node **stack_b);
void				pb(t_stack_node **stack_a, t_stack_node **stack_b);
void				ra(t_stack_node **stack_a);
void				sa(t_stack_node *stack_a);
void				rra(t_stack_node **stack_a);

// Libft
t_stack_node		*ft_lstnew(int value);
t_stack_node		*ft_lstlast(t_stack_node *head);
void				ft_lstadd_back(t_stack_node **lst, t_stack_node *new);
int					ft_lstsize(t_stack_node *lst);
void				ft_putstr_fd(char *s, int fd);
int					ft_isdigit(int c);
char				*ft_substr(char const *s, unsigned int start, size_t len);
size_t				ft_strlen(const char *s);
char				*ft_strchr(const char *s, int c);
char				*ft_strdup(const char *s1);
size_t				ft_strlcpy(char *dst, const char *src, size_t dstsize);


#endif