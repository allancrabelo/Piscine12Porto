/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugusto <aaugusto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 15:55:29 by aaugusto          #+#    #+#             */
/*   Updated: 2025/01/16 16:01:11 by aaugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i])
	{
		if (str[i] >= 32 && str[i] <= 126)
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
	printf("%d\n", ft_str_is_printable(argv[1]));
	return (0);
} */