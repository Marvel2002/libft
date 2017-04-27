/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit_custom.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatime <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/27 15:23:28 by mmatime           #+#    #+#             */
/*   Updated: 2017/04/27 15:25:43 by mmatime          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		count_letters(char const *str, char c, char d)
{
	int	i;
	int count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] != c && str[i] != d)
			count++;
		i++;
	}
	return (count);
}

static	int		count_words(char const *s, char c, char d)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
			i++;
		while (s[i] && s[i] != d)
			i++;
		count++;
	}
	if ((s[i - 1] == c && count) || (s[i - 1] == d && count))
		count--;
	return (count);
}

char			**ft_strsplit_custom(char const *s, char c, char d)
{
	char	**tab;
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	if (!s)
		return (NULL);
	tab = (char **)malloc(sizeof(*tab) * (count_words(s, c, d) + 1));
	if (!tab)
		return (NULL);
	while (i < (count_words(s, c, d)))
	{
		j = 0;
		tab[i] = (char*)malloc(sizeof(char) * (count_letters(&s[k], c, d) + 1));
		while (s[k] == c || s[k] == d)
			k++;
		while (s[k] && s[k] != c && s[k] != d)
			tab[i][j++] = s[k++];
		tab[i][j] = '\0';
		i++;
	}
	tab[i] = NULL;
	return (tab);
}
