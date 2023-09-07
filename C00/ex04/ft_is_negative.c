/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_is_negative.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: yshalash <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/16 14:13:38 by yshalash      #+#    #+#                 */
/*   Updated: 2023/08/20 11:20:24 by yshalash      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	int		number;
	char	result;

	number = n;
	if (number >= 0)
	{
		result = 'P';
	}
	else
	{
		result = 'N';
	}
	write(1, &result, 1);
}

// int main(void)
// {
// 	ft_is_negative(42);
// 	return (0);
// }
