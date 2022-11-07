/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofannouc <ofannouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 11:12:07 by ofannouc          #+#    #+#             */
/*   Updated: 2022/06/29 15:57:00 by ofannouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	size_total(char **strs, char *sep, int size)
{
	int	i;
	int	tlen;

	i = 0;
	tlen = 0;
	while (i < size)
	{
		tlen += ft_strlen(strs[i]);
		i++;
	}
	tlen += ft_strlen(sep) * (size - 1);
	return (tlen);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	*s;

	k = size_total(strs, sep, size);
	s = (char *)malloc(sizeof(char) * (k + 1));
	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			s[k++] = strs[i][j++];
		j = 0;
		while (sep[j] && i < size - 1)
			s[k++] = sep[j++];
		i++;
	}
	s[k] = '\0';
	return (s);
}
