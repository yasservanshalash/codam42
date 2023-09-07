/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcapitalize.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: yshalash <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/28 11:20:12 by yshalash      #+#    #+#                 */
/*   Updated: 2023/08/28 11:20:15 by yshalash      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int	ft_str_is_numeric(char c)
{
	return ((c >= '0' && c <= '9'));
}

void	condition(int i, int is_alpha, int prev_is_alpha, char *str)
{
	if (is_alpha == 1 && prev_is_alpha == 0)
	{
		if (!(str[i - 1] >= '0' && str[i - 1] <= '9'))
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i];
		else
			str[i] = str[i] - 'a' + 'A';
		else if
			(str[i] >= 'a' && str[i] <= 'z')
							str[i] = str[i];
		else
			str[i] = str[i] + 'a' - 'A';
	}
	if (is_alpha == 1 && prev_is_alpha == 1)
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 'a' - 'A';
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		is_alpha;
	int		prev_is_alpha;
	int		prev_is_number;

	i = 0;
	while (str[i] != '\0')
	{
		is_alpha = ft_str_is_alpha(str[i]);
		prev_is_alpha = ft_str_is_alpha(str[i - 1]);
		prev_is_number = ft_str_is_numeric(str[i - 1]);
		condition(i, is_alpha, prev_is_alpha, str);
		i++;
	}
	return (str);
}

//  int	main(void)
//  {
//  	char string[100] = "42mots quarante-deux; cinquante+et+un";
//  	char *result = ft_strcapitalize(string);
//  	printf("%s", result);
//  	return (0);
//  }
