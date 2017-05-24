/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_mod.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatime <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 18:20:09 by mmatime           #+#    #+#             */
/*   Updated: 2017/05/24 18:22:09 by mmatime          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup_mod(char *str, int size, char c)
{
	int		i;
	int		a;
	char	*dst;

	i = 0;
	a = 0;
	while (str[i] && a < size)
	{
		if (str[i] == c)
			a++;
		i++;
	}
	dst = malloc(sizeof(char *) * (i + 1));
	a = i;
	i = 0;
	while (str[i] && i < a)
	{
		dst[i] = str[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
