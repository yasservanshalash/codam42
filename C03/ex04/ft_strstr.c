/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: yshalash <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/23 19:08:59 by yshalash      #+#    #+#                 */
/*   Updated: 2023/09/02 16:16:12 by yshalash      ########   odam.nl         */
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

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	int		tf_l;

	tf_l = str_length(to_find);
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (j < tf_l && str[i + j] == to_find[j] && str[i + j] != '\0')
		{
			j++;
		}
		if (j == tf_l)
		{
			return (str + i);
		}
		if (to_find[j] == '\0')
		{
			return (str + i);
		}
		i++;
	}
	return (NULL);
}

// int main(void)
// {
// 	// MY STRSTR
// 	char str[100] = "This exercise how the testing works";
// 	char to_find[100] = "testing";
// 	char *answer;
// 	answer = ft_strstr(str, to_find);
// 	printf("%s\n", answer);

// 	// ORIGINAL STRSTR
// 	char str2[100] = "This exercise how the testing works";
// 	char to_find2[100] = "testing";
// 	char *answer2;
// 	answer2 = ft_strstr(str2, to_find2);
// 	printf("%s", answer2);
// 	return 0;
// }
