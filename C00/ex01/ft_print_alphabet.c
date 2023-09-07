/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_alphabet.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: yshalash <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/16 14:08:05 by yshalash      #+#    #+#                 */
/*   Updated: 2023/08/22 10:36:42 by yshalash      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	letter;
	int		i;

	letter = 'a';
	i = 0;
	while (i < 26)
	{
		write(1, &letter, 1);
		letter++;
		i++;
	}
}

// int main(void)
// {
// 	ft_print_alphabet();
// 	return (0);
// }
