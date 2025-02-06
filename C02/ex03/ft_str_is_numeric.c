/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugusto <aaugusto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 15:14:46 by aaugusto          #+#    #+#             */
/*   Updated: 2025/01/16 15:35:45 by aaugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else
			return (0);
	}
	return (1);
}
/* 
#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Input Error\n");
		return (0);
	}
	printf("%d\n", ft_str_is_numeric(argv[1]));
	return (0);
}
 */