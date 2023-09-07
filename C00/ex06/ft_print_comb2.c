/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_comb2.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: yshalash <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/17 11:56:51 by yshalash      #+#    #+#                 */
/*   Updated: 2023/08/20 18:56:45 by yshalash      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	check_if_repetitive(char char1, char char2, char char3)
{
	char	digit1;
	char	digit2;
	char	digit3;

	digit1 = char1;
	digit2 = char2;
	digit3 = char3;
	if (digit1 == digit3)
	{
		return (digit2 + 1);
	}
	else
	{
		return ('0');
	}
}

void	print_combinations(char char1, char char2, char char3, char char4)
{
	write(1, &char1, 1);
	write(1, &char2, 1);
	write(1, " ", 1);
	write(1, &char3, 1);
	write(1, &char4, 1);
	if (char1 != '9' || char2 != '8')
	{
		write(1, ", ", 2);
	}
}

void	loop(char digit1, char digit2, char digit3, char digit4)
{
	int		start_digit2;

	while (digit1 <= '9')
	{
		digit2 = '0';
		while (digit2 <= '9')
		{
			digit3 = digit1;
			while (digit3 <= '9')
			{
				start_digit2 = check_if_repetitive(digit1, digit2, digit3);
				digit4 = start_digit2;
				while (digit4 <= '9')
				{
					print_combinations(digit1, digit2, digit3, digit4);
					digit4++;
				}
				digit3++;
			}
			digit2++;
		}
		digit1++;
	}
}

void	ft_print_comb2(void)
{
	char	i1;
	char	i2;
	char	j1;
	char	j2;

	i1 = '0';
	i2 = '0';
	j1 = '0';
	j2 = '0';
	loop(i1, i2, j1, j2);
}

// int	main(void)
// {
// 	ft_print_comb2();
// 	return (0);
// }
