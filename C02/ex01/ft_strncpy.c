/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugusto <aaugusto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 18:26:19 by aaugusto          #+#    #+#             */
/*   Updated: 2025/01/16 08:35:34 by aaugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
#include <stdio.h>
#include <string.h>
int main(void)
{
	char    src[] = "42 School";
	char    dest[50];

	printf("strncpy: %s\n", strncpy(dest, src, 50));
	printf("ft_strncpy: %s\n", ft_strncpy(dest, src, 50));
	return 0;
}
