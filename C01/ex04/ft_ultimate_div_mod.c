/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugusto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 10:17:24 by aaugusto          #+#    #+#             */
/*   Updated: 2025/01/15 10:17:36 by aaugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = swap / *b;
	*b = swap % *b;
}
/*
#include <stdio.h>
int	main(void)
{
	int	x;
	int	y;
	
	x = 42;
	y = 2;
	
	printf("Before: x = %d, y = %d\n", x, y);
	
	ft_ultimate_div_mod(&x, &y);
	
	printf("After: x = %d, y = %d\n", x, y);
	return (0);
}*/
