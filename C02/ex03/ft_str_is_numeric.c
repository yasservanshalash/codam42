/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_numeric.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: yshalash <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/28 11:18:38 by yshalash      #+#    #+#                 */
/*   Updated: 2023/08/28 11:18:41 by yshalash      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int		i;
	int		counter;

	i = 0;
	counter = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 48 && str[i] <= 57))
		{
		}
		else
		{
			counter++;
		}
		i++;
	}
	if (counter >= 1)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

// int main() {
//     // Write C code here
//     char str[10] = "15565151";
//     int result = ft_str_is_numeric(str);
//     printf("result was %d", result);
//     return 0;
// }
