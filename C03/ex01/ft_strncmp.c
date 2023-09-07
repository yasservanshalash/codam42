/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: yshalash <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/23 15:54:41 by yshalash      #+#    #+#                 */
/*   Updated: 2023/08/29 16:15:36 by yshalash      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	str_length(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int		i;
	int					res;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] - s2[i] != 0)
		{
			res = s1[i] - s2[i];
			return (res);
		}
		i++;
	}
	return (0);
}

// int main()
// {
// 	char s1[] = "Hello";
// 	char s2[] = "";
// 	printf("%d\n", strncmp(s1,s2, 10));
// 	printf("%d", ft_strncmp(s1,s2, 10));
// 	return 0;
// }