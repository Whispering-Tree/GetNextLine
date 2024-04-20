/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpawar <vpawar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 23:42:27 by vpawar            #+#    #+#             */
/*   Updated: 2024/04/20 19:58:08 by vpawar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strnull(const char *s)
{
	int	c;

	if (s == NULL)
		return (-1);
	c = 0;
	while (*(s + c))
	{
		if (*(s + c) == '\n')
			return (c);
		c++;
	}
	return (-1);
}

size_t	ft_strlen(const char *s)
{
	size_t	l;

	l = 0;
	while (*(s + l))
		l++;
	return (l);
}

char	*ft_strlcat_improved(char *dst, const char *src,
		size_t start, size_t end)
{
	size_t	i;

	i = 0;
	while (*(dst + i))
		i++;
	while (start < end && *(src + start))
	{
		*(dst + i) = *(src + start);
		i++;
		start++;
	}
	*(dst + i) = '\0';
	return (dst);
}
