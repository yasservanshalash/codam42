/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: yshalash <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/24 11:42:25 by yshalash      #+#    #+#                 */
/*   Updated: 2023/09/02 16:17:01 by yshalash      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	str_length(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				i;
	unsigned int	j;

	i = str_length(dest);
	j = 0;
	if (str_length(src) > 0)
	{
		while (src[j] != '\0')
		{
			if (j < size - i - 1)
			{
				dest[i] = src[j];
			}
			i++;
			j++;
		}
	}
	dest[i] = '\0';
	return (i);
}

// int main(void)
//  {
//      char dest[100] = "a";
//      char *src = "jasdfg";
//      char dest2[100] = "a";
//      char *src2 = "jasdfg";
//      printf("%lu\n%s\n\n", strlcat(dest, src, 5), dest);
//     printf("%u\n%s", ft_strlcat(dest2, src2, 5), dest);
//      return 0;
//  }