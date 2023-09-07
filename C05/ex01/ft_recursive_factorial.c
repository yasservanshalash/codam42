/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_recursive_factorial.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yshalash <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/30 16:00:04 by yshalash      #+#    #+#                 */
/*   Updated: 2023/09/06 21:07:04 by yshalash      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int		number;

	number = nb;
	if (number < 0)
	{
		return (0);
	}
	if (number > 1)
	{
		return (number * ft_recursive_factorial(number - 1));
	}
	else
	{
		return (1);
	}
}

// int	main(void)
// {
// 	int		num;

// 	num = ft_recursive_factorial(5);
// 	printf("%d", num);
// 	return (0);
// }
