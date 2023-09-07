/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcat.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: yshalash <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/23 18:15:52 by yshalash      #+#    #+#                 */
/*   Updated: 2023/08/28 15:23:11 by yshalash      ########   odam.nl         */
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

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		j;

	i = str_length(dest);
	j = 0;
	if (str_length(src) > 0)
	{
		while (src[j] != '\0')
		{
			dest[i] = src[j];
			i++;
			j++;
		}
	}
	dest[i] = '\0';
	return (dest);
}

// int main()
// {
// 	char message1[30] = "Here is ";
// 	char message2[] = "Johnny!";
// 	strcat(message1, message2);

// 	printf("%s\n", message1);
// 	return (0);
// }