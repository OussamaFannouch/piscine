/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofannouc <ofannouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 15:42:54 by ofannouc          #+#    #+#             */
/*   Updated: 2022/06/28 15:42:58 by ofannouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*range;

	i = 0;
	if (min >= max)
	{
		return (NULL);
	}
	range = (int *)malloc((max - min) * sizeof(int));
	if (!range)
		return (NULL);
	while (i < (max - min))
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}
