/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: yshalash <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/28 11:18:10 by yshalash      #+#    #+#                 */
/*   Updated: 2023/08/29 12:39:23 by yshalash      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

// int main(void)
// {
// 	char str[100] = "hello world";
// 	char dest[100];
// 	char dest2[100];

// 	strncpy(dest, str, 3);
// 	printf("%s", dest);
// 	ft_strncpy(dest2, str, 3);
// 	printf("%s", dest2);
// 	return 0;
// }