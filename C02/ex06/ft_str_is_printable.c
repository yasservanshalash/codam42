/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_printable.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: yshalash <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/28 11:19:31 by yshalash      #+#    #+#                 */
/*   Updated: 2023/08/28 11:19:35 by yshalash      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int		i;
	int		counter;

	i = 0;
	counter = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 32 && str[i] <= 126))
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
//     char str[10] = "ASDSDa!";
//     int result = ft_str_is_printable(str);
//     printf("result was %d", result);
//     return 0;
// }
