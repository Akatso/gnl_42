/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slepetit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 00:17:32 by slepetit          #+#    #+#             */
/*   Updated: 2022/05/04 02:59:58 by slepetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

// ?? char	*ft_read(buff, fd, BUFFER_SIZE, line) return line

// ?? ft_check(line, ...)

char	*get_next_line(int fd)
{
	static char	*save;
	char	*line;
	char	buff[BUFFER_SIZE + 1];
	int	size;

	line = malloc(sizeof(char) * 1);
	if (line == NULL || fd < 0)
		return (NULL);
	size = read(fd, buff, BUFFER_SIZE);
	buff[BUFFER_SIZE] = 0;
	line = 0;
	// line = ft_read(...)
	// if line nana, substr, if line nana
	while (size)
	{
		// fill line with conditions strjoin
		if (ft_strchr(buff, '\n'))
			break ;
		size = read(fd, buff, BUFFER_SIZE);
	}
	// check for save, substr &co
	return (line);
}

int	main()
{
	int	fd;

	fd = open("./fd.txt", O_RDONLY);
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	close(fd);
	return 0;
}
