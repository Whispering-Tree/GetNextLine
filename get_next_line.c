/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpawar <vpawar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 23:42:03 by vpawar            #+#    #+#             */
/*   Updated: 2024/04/24 03:01:00 by vpawar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
/*
char	*get_next_line(int fd)
{
	int		fd;
	int		sz;
	char	*c;
	char	*bigman;
	char	*smallman;

	c = (char *)malloc(BUFFER_SIZE + 1);
	if (c == NULL)
		return (NULL);
	while (ft_strchrn(c) < 0)
	{
		sz = read(fd, c, BUFFER_SIZE);
		if (smallman)
		{
			bigman = ft_strjoin(bigman, smallman, 0, ft_strlen(smallman));
			free(smallman);
			smallman = NULL;
		}
		if (ft_strchrn(c) < 0)
			bigman = ft_strjoin(bigman, c, 0, ft_strlen(c));
		else
		{
			bigman = ft_strjoin(bigman, c, 0, ft_strchrn(c) + 1);
			smallman = ft_strjoin(smallman, c, ft_strchrn(c) + 1, sz);
		}
	}
}
*/

int	main(void)
{
	int		fd;
	int		sz;
	char	*c;
	char	*bigman;
	char	*smallman;

	c = (char *)malloc(BUFFER_SIZE + 1);
	fd = open("foo.txt", O_RDONLY);
	if (fd < 0)
	{
		return (1);
	}
	while (ft_strchrn(c) < 0)
	{
		sz = read(fd, c, BUFFER_SIZE);
		if (smallman)
		{
			bigman = ft_strjoin(bigman, smallman, 0, ft_strlen(smallman));
			free(smallman);
			smallman = NULL;
		}
		if (ft_strchrn(c) < 0)
			bigman = ft_strjoin(bigman, c, 0, ft_strlen(c));
		else
		{
			bigman = ft_strjoin(bigman, c, 0, ft_strchrn(c) + 1);
			smallman = ft_strjoin(smallman, c, ft_strchrn(c) + 1, sz);
		}
	}
	printf("%zu\n%s",ft_strlen(bigman), bigman);
	printf("\n");
	printf("%zu\n%s",ft_strlen(smallman), smallman);
	return (0);
}
