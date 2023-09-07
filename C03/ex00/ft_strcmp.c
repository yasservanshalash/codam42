/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: yshalash <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/23 15:12:26 by yshalash      #+#    #+#                 */
/*   Updated: 2023/08/29 16:15:13 by yshalash      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}

// int main(void)
// {
//     char* str1 = "asdasd";
//     char* str2 = "*";    
//     int res = ft_strcmp(str1, str2);
//     printf("ft_strcmp result: %d\n", res);
//     int res2 = strcmp(str1, str2);
//     printf("strcmp result: %d\n", res2);
//     return 0;
// }