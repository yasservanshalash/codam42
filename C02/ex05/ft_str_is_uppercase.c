/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_uppercase.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: yshalash <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/28 11:19:08 by yshalash      #+#    #+#                 */
/*   Updated: 2023/08/28 11:19:11 by yshalash      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int		i;
	int		counter;

	i = 0;
	counter = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 65 && str[i] <= 90))
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
//     char str[10] = "ASDSD"; 
//     int result = ft_str_is_uppercase(str);
//     printf("result was %d", result);
//     return 0;
// }
