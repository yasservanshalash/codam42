/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_swap.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: yshalash <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/22 20:39:30 by yshalash      #+#    #+#                 */
/*   Updated: 2023/08/22 20:39:44 by yshalash      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
void	ft_swap(int *a, int *b)
{
	int		c;

	c = *a;
	*a = *b;
	*b = c;
}

// int main(void)
// {
// 	int x = 10;
// 	int y = 5;

// 	int* a = &x;
// 	int* b = &y;

// 	ft_swap(a, b);
// 	printf("x = %d, y = %d", x, y);
// 	return (0);
// }
