/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpawar <vpawar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 23:40:30 by vpawar            #+#    #+#             */
/*   Updated: 2024/04/25 18:23:56 by vpawar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

int		ft_strchrn(const char *s);
size_t	ft_strlen(const char *s);
char	*ft_strlcat_improved(char *dst, const char *src,
			size_t start, size_t end);
char	*ft_strjoin_improved(char *s1, char *s2, int start, int end);
char	*get_next_line(int fd);
#endif