/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpawar <vpawar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 23:42:03 by vpawar            #+#    #+#             */
/*   Updated: 2024/04/20 19:56:47 by vpawar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	return (0);
}

int	main(void)
{
	int		fd;
	int		i;
	char	*c;
	char	*bigman;
	char	*smallman;

	c = (char *)malloc(100);
	bigman = (char *)malloc(100);
	smallman = (char *)malloc(100);
	fd = open("foo.txt", O_RDONLY);
	if (fd < 0)
	{
		return (1);
	}
	while (ft_strnull(c) < 0)
	{
		i = read(fd, c, 7);
		if (smallman)
			ft_strlcat_improved(bigman, smallman, 0, ft_strlen(smallman));
		if (ft_strnull(c) < 0)
			ft_strlcat_improved(bigman, c, 0, i);
		else
		{
			ft_strlcat_improved(bigman, c, 0, ft_strnull(c));
			ft_strlcat_improved(smallman, c, ft_strnull(c) + 1, i);
			printf("%s", smallman);
			break ;
		}
	}
	printf("%s", bigman);
	return (0);
}
