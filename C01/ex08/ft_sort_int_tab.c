/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sort_int_tab.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: yshalash <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/22 20:41:54 by yshalash      #+#    #+#                 */
/*   Updated: 2023/08/22 20:42:01 by yshalash      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
void	ft_sort_int_tab(int *tab, int size)
{
	int		i;
	int		j;
	int		temp;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1) 
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

// int main(void)
// {
// 	int arr[] = { 1, 3 ,2 ,5, 4, 10};

// 	ft_sort_int_tab(arr, 6);

// 	int i = 0;
// 	while(i < 6) {
// 		printf("%d", arr[i]);
// 		i++;
// 	}
// 	return (0);
// }
