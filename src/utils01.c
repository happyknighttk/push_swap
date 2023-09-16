/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkayis <tkayis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 19:08:48 by tkayis            #+#    #+#             */
/*   Updated: 2023/09/16 19:08:49 by tkayis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../include/push_swap.h"

int	word_count(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

void	space_checker(char const *s)
{
	if (*(s + 1) == '\0')
		return ;
	while (*s != '\0')
	{
		if (*s != ' ' && *s != '\t')
			return ;
		s++;
	}
	ft_putstr_fd("error\n", 2);
	exit(1);
}

char	**ft_split_1(char const *s, char c)
{
	char	**result;
	int		i;
	int		j;
	int		len;

	i = 0;
	space_checker(s);
	len = word_count(s, c);
	result = malloc(sizeof(char *) * (len + 1));
	if (!result)
		return (0);
	while (i < len)
	{
		while (*s == c)
			s++;
		j = 0;
		while (s[j] != c && s[j])
			j++;
		result[i++] = ft_substr(s, 0, j);
		s += j;
	}
	result[i] = 0;
	return (result);
}

char	*ft_join_strings(char *s1, char *s2)
{
	size_t	i;
	size_t	j;
	char	*result;

	if (!s1)
	{
		s1 = malloc(1);
		s1[0] = '\0';
	}
	result = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!result)
		return (0);
	i = -1;
	while (s1[++i])
		result[i] = s1[i];
	j = 0;
	while (s2[j])
		result[i++] = s2[j++];
	free(s1);
	result[i] = '\0';
	return (result);
}