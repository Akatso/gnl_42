/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slepetit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 18:01:13 by slepetit          #+#    #+#             */
/*   Updated: 2022/05/16 15:51:08 by slepetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strchr(char *str, int c)
{
	size_t	i;

	i = 0;
	if ((char)c == 0)
		return (str + ft_strlen(str));
	while (str[i++])
	{
		if (str[i] == c)
			return (&(str[i]));
	}
	return (NULL);
}

char	*ft_strjoin(char *s1, char *s2)
{
	size_t	i;
	size_t	j;
	char	*dest;

	i = 0;
	j = 0;
	dest = malloc(sizeof(char) * ft_strlen(s1) + ft_strlen(s2) + 1);
	if (dest == NULL)
		return (NULL);
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		dest[i] = s2[j];
		i++;
		j++;
	}
	dest[i] = 0;
	free(s1);
	return (dest);
}

char	*ft_substr(char *str, unsigned int start, size_t len)
{
	size_t	i;
	char	*dest;

	i = 0;
	if (str == NULL || !len)
		return (NULL);
	if (start >= ft_strlen(str))
	{
		dest = malloc(sizeof(char) * 1);
		if (dest == NULL)
			return (NULL);
		*dest = 0;
		return (dest);
	}
	if (len >= ft_strlen(str))
		len = ft_strlen(str) - start;
	dest = malloc(sizeof(char) * len + 1);
	if (dest == NULL)
		return (NULL);
	while (str[start] && len--)
		dest[i++] = str[start++];
	dest[i] = 0;
	return (dest);
}
