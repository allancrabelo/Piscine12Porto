/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugusto <aaugusto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 11:02:15 by aaugusto          #+#    #+#             */
/*   Updated: 2025/01/14 11:08:16 by aaugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n >= 0)
		write(1, "P", 1);
	else
		write(1, "N", 1);
}
/*
int main(void)
{
	ft_is_negative(42);
	write(1, "\n", 1);
	ft_is_negative(0);
	write(1, "\n", 1);
	ft_is_negative(-42);
	write(1, "\n", 1);
}
*/
