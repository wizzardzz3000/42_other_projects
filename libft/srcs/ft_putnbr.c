/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mascagli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 14:55:27 by mascagli          #+#    #+#             */
/*   Updated: 2018/11/07 12:17:43 by mascagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int nb)
{
	unsigned int nb_safe;

	if (nb < 0)
	{
		ft_putchar('-');
		nb_safe = -nb;
	}
	else
		nb_safe = nb;
	if (nb_safe >= 10)
		ft_putnbr(nb_safe / 10);
	ft_putchar(nb_safe % 10 + '0');
}
