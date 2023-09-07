/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_alpha.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: yshalash <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/28 11:18:22 by yshalash      #+#    #+#                 */
/*   Updated: 2023/08/28 11:18:25 by yshalash      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int		i;
	int		counter;

	i = 0;
	counter = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
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
//     char str[10] = "AbCdffGh"; 
//     int result = ft_str_is_alpha(str);
//     printf("result was %d", result);
//     return 0;
// }
