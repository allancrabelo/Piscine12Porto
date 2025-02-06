/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugusto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 15:52:59 by aaugusto          #+#    #+#             */
/*   Updated: 2025/01/15 15:53:03 by aaugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	while (i < size / 2)
	{
		swap = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size -1 - i] = swap;
		i++;
	}
}
/*
#include <stdio.h>
int	main(void)
{
	int	tab[] = {1,2,3,4,5};
	int	size = 5;
	int	i = 0;
	
	printf("Original Array: ");
	{
		while (i < size)
		{
			printf("%d", tab[i]);
			i++;
		}
	}
	printf("\n");

	ft_rev_int_tab(tab, size);

	i = 0;
	printf("After ft_rev_int_tab: ");
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
	printf("\n");
	return 0;
}*/
