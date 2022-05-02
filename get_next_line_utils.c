/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slepetit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 00:20:54 by slepetit          #+#    #+#             */
/*   Updated: 2022/05/02 11:18:36 by slepetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	*p;

	i = 0;
	p = (char *)s;
	if ((char)c == 0)
		return (p + ft_strlen(p));
	while (s[i])
	{
		if (s[i] == (char)c)
			return (&(p[i]));
		i++;
	}
	return (NULL);
}
/*
char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	if (s == NULL)
		return (NULL);
	str = (char *)s;
	if (start > ft_strlen(s))
	{
		str = ft_calloc(1, sizeof(char));
		if (str == NULL)
			return (NULL);
		return (str);
	}
	if (len >= ft_strlen(s))
		len = ft_strlen(s) - start;
	str = ft_calloc(len + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	while (s[start] && len--)
		str[i++] = s[start++];
	return (str);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	*dest;

	i = 0;
	j = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	dest = malloc(sizeof(char) * len + 1);
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
	return (dest);
}

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*dest;
	char	*cpy;

	i = 0;
	cpy = (char *)s;
	dest = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (dest == NULL)
		return (NULL);
	//ft_strcpy(dest, cpy);
	while (cpy[i])
	{
		dest[i] = cpy[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}
*/
