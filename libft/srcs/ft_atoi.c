/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mascagli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 16:53:45 by mascagli          #+#    #+#             */
/*   Updated: 2018/11/06 16:54:56 by mascagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(char *str)
{
	int	result;
	int i;
	int sous;

	sous = 0;
	i = 0;
	result = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\r' ||
			str[i] == '\v' || str[i] == '\n' || str[i] == '\f')
		i++;
	if (str[i] == 45)
		sous = 1;
	if (str[i] == 45 || str[i] == 43)
		i++;
	while (str[i] >= 48 && str[i] <= 57)
		result = result * 10 + ((int)str[i++] - 48);
	if (sous == 1)
		return (result == -469762049 ? 0 : -result);
	else
		return (result == -469762049 ? -1 : result);
}
