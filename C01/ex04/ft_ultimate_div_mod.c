/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ultimate_div_mod.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: yshalash <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/22 20:40:02 by yshalash      #+#    #+#                 */
/*   Updated: 2023/08/22 20:40:05 by yshalash      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
void	ft_ultimate_div_mod(int *a, int *b)
{
	int		div;
	int		mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

// int main(void)
// {
// 	int x = 10;
// 	int y = 5;

// 	int* a = &x;
// 	int* b = &y;

// 	ft_ultimate_div_mod(a, b);
// 	printf("x = %d, y = %d", x, y);
// 	return (0);
// }
