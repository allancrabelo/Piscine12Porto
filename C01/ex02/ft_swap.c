/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugusto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 09:45:46 by aaugusto          #+#    #+#             */
/*   Updated: 2025/01/15 09:45:56 by aaugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
#include <stdio.h>
int	main(void)
{
	int	a;
	int	b;
	
	a = 4;
	b = 2;
	
	printf("Value A: %d\n", a);
	printf("Value B: %d\n", b);
	
	ft_swap(&a, &b);
	
	printf("Value A after ft_swap: %d\n", a);
	printf("Value B after ft_swap: %d\n", b);
	
	return(0);
}*/
