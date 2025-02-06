/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugusto <aaugusto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 16:03:03 by aaugusto          #+#    #+#             */
/*   Updated: 2025/01/16 16:38:41 by aaugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
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
	printf("%s", ft_strupcase(argv[1]));
	printf("\n");
} */