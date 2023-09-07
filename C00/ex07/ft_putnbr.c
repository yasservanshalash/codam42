/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: yshalash <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/17 12:42:49 by yshalash      #+#    #+#                 */
/*   Updated: 2023/08/20 18:57:15 by yshalash      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int		number;
	int		count;
	char	digits[11];

	number = nb;
	count = 0;
	while (number != 0)
	{
		digits[count] = (number % 10) + '0';
		number /= 10;
		count++;
	}
	while (count > 0)
	{
		count--;
		ft_putchar(digits[count]);
	}
}

// int main(void)
// {
// 	ft_putnbr(420);
// 	return (0);
// }
