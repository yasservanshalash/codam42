/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_numbers.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: yshalash <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/16 14:09:15 by yshalash      #+#    #+#                 */
/*   Updated: 2023/08/20 11:18:14 by yshalash      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	digit;
	int		i;

	digit = '0';
	i = 0;
	while (i < 10)
	{
		write(1, &digit, 1);
		digit++;
		i++;
	}
}

// int main(void)
// {
// 	ft_print_numbers();
// 	return (0);
// }
