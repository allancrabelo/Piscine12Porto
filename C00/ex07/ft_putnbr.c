/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugusto <aaugusto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 08:39:43 by aaugusto          #+#    #+#             */
/*   Updated: 2025/01/15 08:57:04 by aaugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar(nb % 10 + '0');
}
/*
#include <limits.h>
#include <stdio.h>
int main(void)
{
    printf("INT_MIN: %d", INT_MIN);
    printf("\n");
    printf("INT_MAX: %d", INT_MAX);
    printf("\n");

    ft_putnbr(42);
    printf("\n");
    ft_putnbr(-2147483648);
    printf("\n");
    ft_putnbr(2147483647);
    printf("\n");
    return 0;
}*/
