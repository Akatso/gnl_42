/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slepetit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 00:18:21 by slepetit          #+#    #+#             */
/*   Updated: 2022/05/11 18:08:12 by slepetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stddef.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

size_t		ft_strlen(const char *str);
size_t		ft_bslash(const char *line);
char	*ft_strchr(const char *s, int c);
char	*ft_substr(char *s, unsigned int start, size_t len);
char	*ft_strjoin(char *s1, const char *s2);
char	*ft_strdup(const char *s);
char	*get_next_line(int fd);
char	*ft_check(char *line, char *save);

#endif
