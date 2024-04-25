/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpawar <vpawar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 23:42:03 by vpawar            #+#    #+#             */
/*   Updated: 2024/04/25 18:28:55 by vpawar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static	char	*smallman;
	int				sz;
	char			*c;
	char	*b;

	c = (char *)malloc(BUFFER_SIZE + 1);
	printf("b = %zu %s\n",ft_strlen(b), b);
	while (ft_strchrn(c) < 0)
	{
		sz = read(fd, c, BUFFER_SIZE);
		// if (smallman)
		// {
		// 	b = ft_strjoin_improved(b, smallman, 0, ft_strlen(smallman));
		// 	free(smallman);
		// 	smallman = NULL;
		// }
		if (ft_strchrn(c) < 0)
			b = ft_strjoin_improved(b, c, 0, ft_strlen(c));
		else
		{
			b = ft_strjoin_improved(b, c, 0, ft_strchrn(c) + 1);
			smallman = ft_strjoin_improved(smallman, c, ft_strchrn(c) + 1, sz);
		}
	}
	// printf("%zu\n%s",ft_strlen(bigman), bigman);
	// printf("\n");
	// printf("%zu\n%s",ft_strlen(smallman), smallman);
	return (b);
}


int	main(void)
{
	int		fd;
	int		sz;
	char	*d;

	fd = open("foo.txt", O_RDONLY);
	if (fd < 0)
	{
		return (1);
	}
	d = get_next_line(fd);
	printf("d = %zu\n%s",ft_strlen(d), d);
	printf("\n");
	//d = get_next_line(fd);
	//printf("%zu\n%s",ft_strlen(d), d);
	//printf("\n");
	close(fd);
	return (0);
}
