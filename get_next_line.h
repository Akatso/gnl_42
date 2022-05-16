/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slepetit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 17:34:43 by slepetit          #+#    #+#             */
/*   Updated: 2022/05/16 13:18:16 by slepetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <stddef.h>
# include <fcntl.h>
# include <string.h>
# include <unistd.h>
# include <stdio.h>

size_t	ft_strlen(char *str);
size_t	ft_nl(char *str);
char	*ft_fill(char *str, int fd);
char	*ft_strchr(char *str, int c);
char	*ft_substr(char *str, unsigned int start, size_t len);
char	*ft_strjoin(char *s1, char *s2);
char	*get_next_line(int fd);

#endif
