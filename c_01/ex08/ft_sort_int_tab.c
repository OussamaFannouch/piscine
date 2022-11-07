/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofannouc <ofannouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 10:15:08 by ofannouc          #+#    #+#             */
/*   Updated: 2022/06/27 11:25:06 by ofannouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	j = 0;
	while (i < size)
	{
		while (j < size)
		{	
			j = i + 1;
			if (tab[i] > tab [j])
			{
				tmp = tab[i];
				tab[i] = tab [j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
	}
}
