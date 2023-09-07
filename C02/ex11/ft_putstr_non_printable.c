/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr_non_printable.c                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: yshalash <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/28 11:20:39 by yshalash      #+#    #+#                 */
/*   Updated: 2023/08/28 11:20:41 by yshalash      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*get_hex(char c)
{
	static char		number[3] = "";

	number[0] = '\\';
	number[1] = "0123456789abcdef"[c / 16]; 
	number[2] = "0123456789abcdef"[c % 16];
	return (number);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	*number;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			write(1, &str[i], 1);
		}
		else
		{
			number = get_hex(str[i]);
			write(1, number, 3);
		}
		i++;
	}
}

// int main(void)
// {
//   char str[] = "Coucou\t\rtu vas bien *& \t.  ?";
//   ft_putstr_non_printable(str);
//   return 0;
// }
