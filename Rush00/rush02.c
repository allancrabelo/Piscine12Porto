/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmaria- <brmaria-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 17:51:42 by brmaria-          #+#    #+#             */
/*   Updated: 2025/01/19 18:06:40 by brmaria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_line(char left, char middle, int x)
{
	int	indice_coluna;

	indice_coluna = 0;
	while (indice_coluna < x)
	{
		if (indice_coluna == 0 || indice_coluna == x - 1)
			write (1, &left, 1);
		else if (indice_coluna != 0 && indice_coluna != x - 1)
			write (1, &middle, 1);
		indice_coluna ++;
	}
}

void	rush(int x, int y)
{
	int	indice_linha;

	indice_linha = 0;
	while (indice_linha < y)
	{
		if (indice_linha == 0)
			print_line ('A', 'B', x);
		else if (indice_linha != 0 && indice_linha != y - 1)
			print_line ('B', ' ', x);
		else
			print_line ('C', 'B', x);
		indice_linha++;
		write (1, "\n", 1);
	}
}
