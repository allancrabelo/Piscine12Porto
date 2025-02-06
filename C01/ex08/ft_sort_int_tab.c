/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugusto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 16:09:39 by aaugusto          #+#    #+#             */
/*   Updated: 2025/01/15 16:09:42 by aaugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	while (size > 1)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				swap = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = swap;
			}
			i++;
		}
		size--;
	}
}
/*
#include <stdio.h>
int	main(void)
{
	int	tab[] = {5, 2, 9, 5, 6, 1};
	int	size = 6;
	int	i = 0;
	
	printf("Before ft_sort_int_tab: \n");
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
	printf("\n");
	
	ft_sort_int_tab(tab, size);
	
	i = 0;
	printf("After ft_sort_int_tab: \n");
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
	printf("\n");
	return (0);
}*/
