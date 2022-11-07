/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofannouc <ofannouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 15:23:22 by ofannouc          #+#    #+#             */
/*   Updated: 2022/06/30 10:14:08 by ofannouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include"ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *src)
{
	int		i;
	int		s;
	char	*dest;

	i = -1;
	s = ft_strlen(src);
	dest = malloc(sizeof(char) * (s + 1));
	if (dest == NULL)
		return (NULL);
	while (src[++i] != '\0')
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*ret;

	i = 0;
	ret = malloc(sizeof(t_stock_str) * (ac + 1));
	if (ret == NULL)
		return (NULL);
	while (i < ac)
	{
		ret[i].size = ft_strlen(av[i]);
		ret[i].str = av[i];
		ret[i].copy = ft_strcpy(ret[i].str);
		i++;
	}
	ret[i].str = NULL;
	return (ret);
}
