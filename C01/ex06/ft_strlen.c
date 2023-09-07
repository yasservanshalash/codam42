/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: yshalash <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/22 20:41:18 by yshalash      #+#    #+#                 */
/*   Updated: 2023/08/22 20:41:21 by yshalash      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
int	ft_strlen(char *str)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		count++;
		i++;
	}
	return (count);
}

// int main(void)
// {
// 	char str[] = "lorem ipsum";
// 	int count = ft_strlen(str);
// 	printf("count is %d", count);
// 	return 0;
// }
