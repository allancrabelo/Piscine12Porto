/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugusto <aaugusto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 16:40:47 by aaugusto          #+#    #+#             */
/*   Updated: 2025/01/16 16:44:01 by aaugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		else
			i++;
	}
	return (str);
}
/* #include <stdio.h>
int	main(int argc, char **argv)
{
	if(argc != 2)
	{
		printf("Input Error\n");
		return(0);
	}
	printf("%s", ft_strlowcase(argv[1]));
	printf("\n");
} */