/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpawar <vpawar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 23:42:27 by vpawar            #+#    #+#             */
/*   Updated: 2024/04/25 18:15:58 by vpawar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strchrn(const char *s)
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

char	*ft_strjoin_improved(char *s1, char *s2, int start, int end)
{
	char	*res;
	char	*tmp;

	if (s1 == NULL)
	{
		s1 = malloc(1);
		if (s1 == NULL)
			return (NULL);
		*(s1 + 0) = '\0';
	}
	res = malloc(ft_strlen(s1) + end - start + 1);
	if (res == NULL)
		return (NULL);
	tmp = res;
	while (*s1)
		*res++ = *s1++;
	while (*(s2 + start) && start < end)
		*res++ = *(s2 + start++);
	*res = '\0';
	return (tmp);
}
