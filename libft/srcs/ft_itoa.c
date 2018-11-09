/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mascagli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 14:08:07 by mascagli          #+#    #+#             */
/*   Updated: 2018/11/07 14:28:09 by mascagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_abs(int nbr)
{
	return ((nbr <= 0) ? -nbr : nbr);
}

static int		count_tab(int nbr)
{
	int k;

	k = 0;
	if (nbr < 10)
		k = 1;
	while (nbr != 0)
	{
		nbr = nbr / 10;
		k += 1;
	}
	return (k);
}

char			*ft_itoa(int nbr)
{
	char	*tab;
	int		k;
	int		sign;

	k = count_tab(nbr);
	sign = (nbr < 0) ? -1 : 0;
	tab = (char*)malloc(sizeof(*tab) * k + 1);
	if (tab == NULL)
		return (NULL);
	tab[k] = '\0';
	k -= 1;
	while (k >= 0)
	{
		tab[k] = '0' + ft_abs(nbr % 10);
		nbr = ft_abs(nbr / 10);
		k--;
	}
	if (sign == -1)
		tab[0] = '-';
	return (tab);
}
