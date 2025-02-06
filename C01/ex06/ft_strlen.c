/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugusto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 15:48:08 by aaugusto          #+#    #+#             */
/*   Updated: 2025/01/15 15:48:12 by aaugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char a[] = "42School";
	printf("Original strlen: %ld\n", strlen(a));
	printf("Before Ft_strlen: %d\n", ft_strlen(a));
	return 0;
}*/
