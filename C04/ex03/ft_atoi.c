/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: yshalash <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/29 16:41:59 by yshalash      #+#    #+#                 */
/*   Updated: 2023/09/05 16:34:58 by yshalash      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_num(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int	logic(char *str, int i, int sign, int number)
{
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] != '-' && str[i] != '+' && is_num(str[i]) == 0)
		return (0);
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign++;
		i++;
	}
	if (!is_num(str[i]))
		return (0);
	while (is_num(str[i]))
	{
		number = number * 10 + (str[i] - '0');
		i++;
	}
	if (sign % 2 == 0)
		return (number);
	else
		return (number * -1);
}

int	ft_atoi(char *str)
{
	int		i;
	int		sign;
	int		number;

	i = 0;
	sign = 0;
	number = 0;
	return (logic(str, i, sign, number));
}
// int main() {
//     char str1[] =  "-+ 123"; 
//     printf("The result of my function is %d\n", ft_atoi(str1));

//     return 0;
// }
