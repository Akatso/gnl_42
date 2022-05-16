/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slepetit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 18:13:38 by slepetit          #+#    #+#             */
/*   Updated: 2022/05/16 16:07:00 by slepetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_nl(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		if (str[i++] == '\n')
			return (i);
	return (i);
}

char	*ft_fill(char *str, int fd)
{
	int		i;
	char	*buff;

	i = 1;
	buff = malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (buff == NULL)
		return (NULL);
	*buff = 0;
	while (i && !ft_strchr(str, '\n'))
	{
		i = read(fd, buff, BUFFER_SIZE);
		buff[i] = 0;
		str = ft_strjoin(str, buff);
		if (str == NULL)
			return (free(buff), NULL);
	}
	return (free(buff), str);
}

char	*get_next_line(int fd)
{
	static char	*save;
	char		*str;
	char		*line;

	str = malloc(sizeof(char) * 1);
	if (str == NULL)
		return (NULL);
	*str = 0;
	if (read(fd, str, 0) == -1 || fd < 0 || BUFFER_SIZE < 1)
		return (free(str), NULL);
	if (!save)
	{
		save = malloc(sizeof(char));
		if (save == NULL)
			return (NULL);
		*save = 0;
	}
	str = ft_strjoin(str, save);
	free(save);
	str = ft_fill(str, fd);
	save = ft_substr(str, ft_nl(str), ft_strlen(str) - ft_nl(str) + 1);
	line = ft_substr(str, 0, ft_nl(str));
	return (free(str), line);
}
