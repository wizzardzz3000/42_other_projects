/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mascagli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 10:15:55 by mascagli          #+#    #+#             */
/*   Updated: 2018/11/13 14:24:34 by mascagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>

int		get_next_line(int const fd, char **line)
{
	char buffer[BUFF_SIZE] = "";
	if (!*line)
		*line = malloc(100 * sizeof(char));
	*line[0] = '\0';

	while (read(fd, buffer, BUFF_SIZE) > 0) {
		ft_strncat(*line, buffer, BUFF_SIZE);
		if (buffer[0] == '\n')
			break;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int		fd;
	char	*line;

	if (argc != 2)
	{
		ft_putstr("Error");
		return (0);
	}
	fd = open(argv[1], O_RDONLY);
	get_next_line(fd, &line);
	ft_putstr(line);
	get_next_line(fd, &line);
	ft_putstr(line);
	get_next_line(fd, &line);
	ft_putstr(line);
}
