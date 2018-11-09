/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mascagli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 12:04:00 by mascagli          #+#    #+#             */
/*   Updated: 2018/11/07 14:28:19 by mascagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_count_words(char *str, char c)
{
	int i;
	int k;

	i = 0;
	k = 0;
	while (str[i])
	{
		if (str[i] && str[i] == c)
			i++;
		if (str[i] && str[i] != c)
		{
			k++;
			while (str[i] && str[i] != c)
				i++;
		}
	}
	return (k);
}

static char		*ft_add(char *str, char c)
{
	int		i;
	int		k;
	char	*word;

	i = 0;
	k = 0;
	while (str[k] && str[k] != c)
		k++;
	word = malloc(sizeof(char) * k + 1);
	if (word == NULL)
		return (NULL);
	while (str[i] && str[i] != c)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	int		k;
	char	**tab;

	if (s == NULL)
		return (NULL);
	i = 0;
	k = ft_count_words((char*)s, c);
	tab = malloc(sizeof(char*) * k + 1);
	if (tab == NULL)
		return (NULL);
	while (*s)
	{
		if (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			tab[i] = ft_add((char*)s, c);
			i++;
			while (*s && *s != c)
				s++;
		}
	}
	tab[i] = NULL;
	return (tab);
}
