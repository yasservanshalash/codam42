/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_is_prime.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: yshalash <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/31 12:26:40 by yshalash      #+#    #+#                 */
/*   Updated: 2023/09/04 23:54:14 by yshalash      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int		count;
	int		i;

	count = 0;
	i = 1;
	while (i <= nb)
	{
		if (nb % i == 0)
		{
			count++;
		}
		i++;
	}
	if (count == 2)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

// int main(void)
// {
//     printf("%d", ft_is_prime(7));
//     return 0;
// }
