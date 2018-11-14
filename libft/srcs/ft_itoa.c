/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mascagli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 14:08:07 by mascagli          #+#    #+#             */
/*   Updated: 2018/11/13 16:39:06 by mascagli         ###   ########.fr       */
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
	else
	{
		while (nbr != 0)
		{
			nbr = nbr / 10;
			k += 1;
		}
	}
	return (k);
}

char			*ft_itoa(int n)
{
	char	*tab;
	int		k;
	int		sign;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	k = count_tab(ft_abs(n));
	sign = (n < 0) ? -1 : 0;
	if (sign == -1)
		k += 1;
	tab = (char*)malloc(sizeof(*tab) * k + 1);
	if (tab == NULL)
		return (NULL);
	tab[k] = '\0';
	k -= 1;
	while (k >= 0)
	{
		tab[k] = '0' + ft_abs(n % 10);
		n = ft_abs(n / 10);
		k--;
	}
	if (sign == -1)
		tab[0] = '-';
	return (tab);
}
