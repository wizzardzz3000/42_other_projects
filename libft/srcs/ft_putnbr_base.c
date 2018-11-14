/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mascagli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 18:54:00 by mascagli          #+#    #+#             */
/*   Updated: 2018/11/14 13:41:00 by mascagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_check_base(char *base)
{
	int i;
	int j;

	if (!base)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

void			ft_putnbr_base(int nbr, char *base)
{
	unsigned int len;
	unsigned int safe_nb;

	len = ft_check_base(base);
	if (len < 2 || !(len))
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		safe_nb = -nbr;
	}
	else
		safe_nb = nbr;
	if (safe_nb < len)
		ft_putchar(base[safe_nb]);
	else
	{
		ft_putnbr_base(safe_nb / len, base);
		ft_putnbr_base(safe_nb % len, base);
	}
}
