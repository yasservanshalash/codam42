/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlowcase.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: yshalash <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/28 11:19:57 by yshalash      #+#    #+#                 */
/*   Updated: 2023/08/28 11:19:59 by yshalash      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 'a' - 'A';
		}
		i++;
	}
	return (str);
}

// int main(void)
// {
//     char string[] = "lOREM ipSum*)()sadsaSDASD*)(*)";
//     char* result = ft_strlowcase(string);
//     printf("%s", result);
//     return (0);
// }
