/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mascagli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 13:28:41 by mascagli          #+#    #+#             */
/*   Updated: 2018/11/05 14:44:12 by mascagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_missing(void)
{
	write(2, "File name missing.\n", 19);
}

void	ft_too_many(void)
{
	write(2, "Too many arguments.\n", 20);
}

int		main(int argc, char **argv)
{
	int		i;
	int		fl;
	char	c;

	i = 0;
	fl = 0;
	if (argc == 1)
		ft_missing();
	else if (argc == 2)
	{
		fl = open(argv[1], O_RDONLY);
		while ((read(fl, &c, 1)))
		{
			write(1, &c, 1);
			i++;
		}
		close(fl);
	}
	else if (argc > 2)
		ft_too_many();
	return (0);
}
