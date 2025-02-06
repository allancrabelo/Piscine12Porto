/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugusto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 16:31:11 by aaugusto          #+#    #+#             */
/*   Updated: 2025/01/15 16:31:16 by aaugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*src = "42School";
	char	dest[100];
	
	printf("Before | src: %s, dest: %s\n", src, dest);
	
	ft_strcpy(dest, src);

	printf("After | src: %s, dest: %s\n", src, dest);
	return(0);
}*/
