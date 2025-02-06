/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugusto <aaugusto@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 17:24:42 by aaugusto          #+#    #+#             */
/*   Updated: 2025/01/29 17:26:47 by aaugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcat(char *dest, char *src)
{
    int i;
    int j;

    i = 0;
    while(dest[i])
        i++;
    while(src[j])
    {
        dest[i] = src[j];
        j++;
        i++;
    }
    dest[i] = '\0';
    return(dest);
}