/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slepetit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 00:17:32 by slepetit          #+#    #+#             */
/*   Updated: 2022/05/02 11:28:55 by slepetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

char	*get_next_line(int fd)
{
	static char	*save;
	char	*line;

	line = malloc(sizeof(char) * BUFFER_SIZE + 1);
	read(fd, line, BUFFER_SIZE);
	save = ft_strchr(line, '\n');
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
