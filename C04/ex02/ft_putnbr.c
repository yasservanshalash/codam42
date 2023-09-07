/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: yshalash <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/24 11:56:09 by yshalash      #+#    #+#                 */
/*   Updated: 2023/08/29 20:52:33 by yshalash      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_put_min(void)
{
	write(1, "-2147483648", 11);
}

void	logic(int number, int count, char *digits)
{
	if (number == -2147483648)
		ft_put_min();
	else if (number == 0)
		write(1, "0", 1);
	else
	{
		if (number < 0)
		{
			ft_putchar('-');
			number = -number;
		}
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
}

void	ft_putnbr(int nb)
{
	int		number;
	int		count;
	char	digits[11];

	number = nb;
	count = 0;
	logic(number, count, digits);
}

// int	main(void)
// {
// 	ft_putnbr(-2147483648);
// 	return (0);
// }
