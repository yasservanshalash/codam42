/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: yshalash <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/28 11:20:29 by yshalash      #+#    #+#                 */
/*   Updated: 2023/08/28 21:09:38 by yshalash      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	length;

	i = 0;
	length = 0;
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	if (i < size)
		dest[i] = '\0';
	while (src[length] != '\0')
	{
		length++;
	}
	return (length);
}

// int main(void)
// {
// 	char str[] = "Hello \n";
// 	char dest[11];
// 	unsigned int	count;
// 	unsigned int count2;

// 	count = strlcpy(dest, str, 5);
// 	count2 = ft_strlcpy(dest, str, 5);
// 	printf("%d\n", count);
// 		printf("%s\n", dest);

// 	printf("%d\n", count2);
// 	printf("%s\n", dest);
// 	return (0);
// }
