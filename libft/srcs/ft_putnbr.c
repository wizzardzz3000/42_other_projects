/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mascagli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 14:55:27 by mascagli          #+#    #+#             */
/*   Updated: 2018/11/14 12:51:57 by mascagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	unsigned int nb_safe;

	if (n < 0)
	{
		ft_putchar('-');
		nb_safe = -n;
	}
	else
		nb_safe = n;
	if (nb_safe >= 10)
		ft_putnbr(nb_safe / 10);
	ft_putchar(nb_safe % 10 + '0');
}
