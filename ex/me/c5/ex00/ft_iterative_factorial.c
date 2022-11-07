/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofannouc <ofannouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 13:01:23 by ofannouc          #+#    #+#             */
/*   Updated: 2022/06/25 12:35:18 by ofannouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	tmp;

	tmp = 1;
	i = 1;
	while (i <= nb)
	{
		tmp = tmp * i;
		i++;
	}
	return (tmp);
}
