/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_div_mod.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: yshalash <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/22 20:42:18 by yshalash      #+#    #+#                 */
/*   Updated: 2023/08/22 20:42:22 by yshalash      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int main(void)
// {
// 	int x = 10;
// 	int y = 5;

// 	int div;
// 	int mod;
// 	int* pdiv = &div;
// 	int* pmod = &mod;

// 	ft_div_mod(x, y, pdiv, pmod);

// 	printf("x = %d, y = %d, div = %d, mod = %d", x, y, div, mod);
// 	return (0);
// }
