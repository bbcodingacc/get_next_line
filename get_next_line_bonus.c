/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarabog <mkarabog@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 14:06:54 by mkarabog          #+#    #+#             */
/*   Updated: 2023/02/04 14:39:28 by mkarabog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*scan(int fd, char *res)
{
	int		size;
	char	*str;

	str = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!str)
		return (NULL);
	size = 1;
	while (size > 0 && !ft_strchr(res, '\n'))
	{
		size = read(fd, str, BUFFER_SIZE);
		if (size == -1)
		{
			free(str);
			free(res);
			return (NULL);
		}
		str[size] = 0;
		res = join(res, str);
		if (!res)
			return (NULL);
	}
	free(str);
	return (res);
}

char	*get_next_line(int fd)
{
	static char		*bufferc[256];
	char			*str;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	bufferc[fd] = scan(fd, bufferc[fd]);
	if (bufferc[fd] == NULL)
		return (NULL);
	str = get_linex(bufferc[fd]);
	bufferc[fd] = next_line(bufferc[fd]);
	return (str);
}
