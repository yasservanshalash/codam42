/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_reverse_alphabet.c                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: yshalash <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/16 14:08:45 by yshalash      #+#    #+#                 */
/*   Updated: 2023/08/22 10:37:05 by yshalash      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	letter;
	int		i;

	letter = 'z';
	i = 0;
	while (i < 26) 
	{
		write(1, &letter, 1);
		letter--;
		i++;
	}
}

// int main(void)
// {
// 	ft_print_reverse_alphabet();
// 	return (0);
// }
