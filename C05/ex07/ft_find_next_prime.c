/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_find_next_prime.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: yshalash <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/04 23:57:41 by yshalash      #+#    #+#                 */
/*   Updated: 2023/09/04 23:58:46 by yshalash      ########   odam.nl         */
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

int	ft_find_next_prime(int nb)
{
	int		i;
	int		next_prime;

	i = nb;
	next_prime = nb;
	if (ft_is_prime(nb) == 1)
		return (nb);
	else
	{
		while (ft_is_prime(i) != 1)
		{
			next_prime = i + 1;
			i++;
		}
	}
	return (next_prime);
}

// int main(void)
// {
//     printf("%d", ft_find_next_prime(2147483647));
//     return (0);
// }
