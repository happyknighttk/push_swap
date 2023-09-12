/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkayis <tkayis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 18:23:11 by tkayis            #+#    #+#             */
/*   Updated: 2023/09/12 14:13:19 by tkayis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

char	*ft_strchr(const char *s, int c)
{
	int	len;

	len = 0;
	while (s[len] != (unsigned char)c)
	{
		if (!s[len++])
			return (0);
	}
	return ((char *)&s[len]);
}