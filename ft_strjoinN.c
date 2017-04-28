/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatime <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 17:36:20 by mmatime           #+#    #+#             */
/*   Updated: 2017/04/28 15:47:37 by mmatime          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoinN(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		a;
	char	*str;

	i = 0;
	j = 0;
	a = 0;
	if (!s1 || !s2)
		return (NULL);
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	str = (char *)malloc(sizeof(char) * ((i + j) + 2));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
		str[a++] = s1[i++];
	while (s2[j])
		str[a++] = s2[j++];
	str[a] = '\n';
	a++;
	str[a] = '\0';
	return (str);
}
