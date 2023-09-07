/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_iterative_power.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: yshalash <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/30 16:05:22 by yshalash      #+#    #+#                 */
/*   Updated: 2023/09/06 21:08:08 by yshalash      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int		i;
	int		result;

	i = power;
	result = 1;
	if (power < 0)
	{
		return (0);
	}
	if (nb == 0 && power == 0)
	{
		return (1);
	}
	while (i > 0)
	{
		result = result * nb;
		i--;
	}
	return (result);
}

// int	main(void)
// {
// 	printf("%d", ft_iterative_power(5, 2));
// 	return (0);
// }
