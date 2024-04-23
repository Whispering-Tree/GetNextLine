/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpawar <vpawar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 23:42:03 by vpawar            #+#    #+#             */
/*   Updated: 2024/04/23 20:44:37 by vpawar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
/*
char	*get_next_line(int fd)
{
	int		sz;
	char	*c;
	char	*bigman;
	char	*smallman;

	c = (char *)malloc(BUFFER_SIZE + 1);
	smallman = (char *)malloc(100);
	while (ft_strnull(c) < 0)
	{
		sz = read(fd, c, BUFFER_SIZE);
		if (smallman)
			bigman = ft_strlcat_improved(bigman, smallman, 0, ft_strlen(smallman));
		if (ft_strnull(c) < 0)
			bigman = ft_strlcat_improved(bigman, c, 0, sz);
		else
		{
			bigman = ft_strlcat_improved(bigman, c, 0, ft_strnull(c) + 1);
			smallman = ft_strlcat_improved(smallman, c, ft_strnull(c) + 1, sz);
			printf("%s", smallman);
		}
	}
	return (bigman);
}
*/

int	ft_linelen(int fd)
{
	int		i;
	int		sz;
	char	*s;

	i = 0;
	s = (char *)malloc(BUFFER_SIZE + 1);
	while (ft_strnull(s) < 0)
	{
		sz = read(fd, s, BUFFER_SIZE);
		if (ft_strnull(s) < 0)
		{
			i += sz;
			printf("if :%i\n",i);
		}
		else
		{
			i += ft_strnull(s) + 1;
			printf("else :%i\n",i);
		}
	}
	return (i);
}

int	main(void)
{
	int		fd;
	int		sz;
	char	*c;
	char	*bigman;
	char	*smallman;

	c = (char *)malloc(BUFFER_SIZE + 1,1);
	fd = open("foo.txt", O_RDONLY);
	if (fd < 0)
	{
		return (1);
	}
	while (ft_strnull(c) < 0)
	{
		sz = read(fd, c, BUFFER_SIZE);
		if (ft_strnull(c) < 0)
			bigman = ft_strlcat_improved(bigman, c, 0, ft_strlen(c));
		else
		{
			bigman = ft_strlcat_improved(bigman, c, 0, ft_strnull(c));
			smallman = ft_strlcat_improved(smallman, c, ft_strnull(c), sz);
		}
	}
	printf("%zu\n%s",ft_strlen(bigman), bigman);
	printf("\n");
	printf("%zu\n%s",ft_strlen(smallman), smallman);
	return (0);
}
