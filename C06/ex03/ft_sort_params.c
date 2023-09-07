/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sort_params.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: yshalash <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/31 13:36:04 by yshalash      #+#    #+#                 */
/*   Updated: 2023/09/06 17:22:05 by yshalash      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_arg(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}

void	logic(int argc, char **argv, int i, char *temp)
{
	int		j;

	while (i < argc -1)
	{
		j = 1;
		while (j < argc -1)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
			{
				temp = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	int		k;
	char	*temp;

	temp = NULL;
	i = 1;
	k = 1;
	logic(argc, argv, i, temp);
	while (k < argc)
	{
		write_arg(argv[k]);
		k++;
	}
	return (0);
}
