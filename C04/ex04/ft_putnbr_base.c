/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_base.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: yshalash <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/28 12:18:23 by yshalash      #+#    #+#                 */
/*   Updated: 2023/08/29 21:41:18 by yshalash      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	is_repetitive(char *base)
{
	int		i;
	int		count;
	int		j;

	i = 0;
	count = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		while (j < ft_strlen(base))
		{
			if (base[i] == base[j])
				count++;
			j++;
		}
		i++;
	}
	if (count > 0)
		return (1);
	else
	{
		return (0);
	}
}

int	has_plus_or_minus(char *base)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			count++;
		i++;
	}
	if (count > 0)
		return (1);
	else 
		return (0);
}

void	conditions(int number, int number_base, char *base, char *result)
{
	int		i;

	i = 0;
	if (number == 0)
	{
		write(1, &base[0], 1);
	}
	if (number < 0)
	{
		write(1, "-", 1);
		number = -number;
	}
	while (number > 0)
	{
		result[i] = base[number % number_base];
		number /= number_base;
		i++;
	}
	result[i] = '\0';
	while (i > 0)
	{
		i--;
		write(1, &result[i], 1);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		number;
	int		number_base;
	char	result[100];
	int		i;

	if (ft_strlen(base) < 2 || is_repetitive(base) == 1)
	{
	}
	else if (has_plus_or_minus(base))
	{
	}
	else
	{
		number = nbr;
		number_base = ft_strlen(base);
		i = 0;
		conditions(number, number_base, base, result);
	}
}

// int main (void)
// {
//     return (0);
// }