/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: yshalash <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/23 18:59:51 by yshalash      #+#    #+#                 */
/*   Updated: 2023/08/24 19:18:51 by yshalash      ########   odam.nl         */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int					i;
	unsigned int		j;

	i = str_length(dest);
	j = 0;
	if (str_length(src) > 0)
	{
		while (j < nb && src[j] != 0)
		{
			dest[i] = src[j];
			i++;
			j++;
		}
	}
	dest[i] = '\0';
	return (dest);
}

// int main(void)
// {
//     char dest[100] = "a dog";
//     char* src = "jumped";

//     ft_strncat(dest, src, 2);
//     printf("%s", dest);

//     return 0;
// }