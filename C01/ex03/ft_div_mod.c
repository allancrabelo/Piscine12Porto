/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugusto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 10:00:36 by aaugusto          #+#    #+#             */
/*   Updated: 2025/01/15 10:00:53 by aaugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>
int	main(void)
{
	int a = 42;
	int b = 2;
	int div;
	int mod;
	
	ft_div_mod(a, b, &div, &mod);
	
	printf("Division: %d\n", div);
	printf("Module: %d\n", mod);
	return (0);
}*/
