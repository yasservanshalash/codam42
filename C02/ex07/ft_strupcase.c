/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strupcase.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: yshalash <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/28 11:19:46 by yshalash      #+#    #+#                 */
/*   Updated: 2023/08/28 11:19:49 by yshalash      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 'a' + 'A';
		}
		i++;
	}
	return (str);
}

// int main(void)
// {
//     char string[] = "lorem ipsum*9*ASDDSA";
//     char* result = ft_strupcase(string);
//     printf("%s", result);
//     return (0);
// }
