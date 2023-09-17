/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkayis <tkayis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 18:23:13 by tkayis            #+#    #+#             */
/*   Updated: 2023/09/17 18:46:21 by tkayis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

char	*ft_strdup(const char *s1)
{
	char	*pt;
	int		i;

	i = 0;
	pt = (char *) malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!pt)
		return (NULL);
	while (*s1)
		pt[i++] = *s1++;
	pt[i] = '\0';
	return (pt);
}
