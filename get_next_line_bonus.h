/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarabog <mkarabog@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 14:07:07 by mkarabog          #+#    #+#             */
/*   Updated: 2023/02/04 14:07:23 by mkarabog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

char	*get_next_line(int fd);
char	*scan(int fd, char *res);
size_t	ft_strlen(const char *s);
char	*ft_strchr(const char *s, int c);
char	*join(char *s1, char *s2);
char	*get_linex(char *str);
char	*next_line(char *str);

#endif