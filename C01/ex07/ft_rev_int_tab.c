/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_rev_int_tab.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: yshalash <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/22 20:41:33 by yshalash      #+#    #+#                 */
/*   Updated: 2023/08/22 20:41:36 by yshalash      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include<stdio.h>
void	ft_rev_int_tab(int *tab, int size)
{
	int		temp;
	int		start;
	int		end;

	start = 0;
	end = size - 1;
	while (start < end)
	{
		temp = tab[start];
		tab[start] = tab[end];
		tab[end] = temp;
		start++;
		end--;
	}
}

// int main(void)
// {
// 	int arr[7] = { 1 ,  3 , 3, 4, 5, 10, 3};
// 	ft_rev_int_tab(arr, 7);

// 	int i = 0;
// 	while(i < 7) {
// 		printf("%d", arr[i]);
// 		i++;
// 	}
// 	return (0);
// }
