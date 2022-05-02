/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slepetit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 00:18:21 by slepetit          #+#    #+#             */
/*   Updated: 2022/05/02 11:19:05 by slepetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stddef.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>

//size_t		ft_strlen(char *str);
char	*ft_strchr(const char *s, int c);
//char	*ft_substr(const char *s, unsigned int start, size_t len)
//char	*ft_strjoin(const char *s1, const char *s2)
//char	*ft_strdup(const char *s)
char	*get_next_line(int fd);

#endif
