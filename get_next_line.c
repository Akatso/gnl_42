/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slepetit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 00:17:32 by slepetit          #+#    #+#             */
/*   Updated: 2022/05/11 19:16:16 by slepetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_bslash(const char *line)
{
	size_t	i;

	i = 0;
	while (line[i])
	{
		if (line[i] == '\n')
			return (i);
		i++;
	}
	return (i);
}

char	*ft_check_line(char **line, char *save)
{
	if (save)
		*line = ft_strjoin(save, *line);
	if (ft_strchr(*line, '\n'))
		save = ft_substr(*line, ft_bslash(*line) + 1, ft_strlen(*line));
	*line = ft_substr(*line, 0, ft_bslash(*line) + 1);
	return (save);
}

char	*get_next_line(int fd)
{
	static char	*save;
	char	*line;
	char	buff[BUFFER_SIZE + 1];
	int	size;

	buff[BUFFER_SIZE] = 0;
	size = 1;
	line = malloc(sizeof(char) * 1);
	if (line == NULL || fd < 0)
		return (NULL);
	while (size)
	{
		if (save && ft_strchr(save, '\n'))
			break ;
		size = read(fd, buff, BUFFER_SIZE);
		buff[size] = 0;
		line = ft_strjoin(line, buff);
		if (ft_strchr(line, '\n'))
			break ;
	}
	if (!save && size == 0)
	{
		return (NULL);
	}
	save = ft_check_line(&line, save);
	return (line);
}

/*int	main()
{
	int	fd;
	char	*str;

	fd = open("./fd.txt", O_RDONLY);
	str = get_next_line(fd);
	printf("%s", str);
	free(str);
	str = get_next_line(fd);
	printf("%s", str);
	free(str);
	close(fd);
	return 0;
}*/
