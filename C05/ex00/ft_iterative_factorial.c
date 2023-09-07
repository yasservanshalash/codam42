/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_iterative_factorial.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yshalash <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/30 15:54:04 by yshalash      #+#    #+#                 */
/*   Updated: 2023/09/04 22:01:13 by yshalash      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int		number;
	int		result;

	number = nb;
	result = 1;
	if (number < 0)
	{
		return (0);
	}
	while (number > 1)
	{
		result *= number;
		(number--);
	}
	return (result);
}

// int	main(void)
// {
// 	printf("%d", ft_iterative_factorial(4));
// 	return (0);
// }
