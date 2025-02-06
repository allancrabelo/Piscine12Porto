/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugusto <aaugusto@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 17:28:00 by aaugusto          #+#    #+#             */
/*   Updated: 2025/01/29 17:34:34 by aaugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
    int i;
    int j;

    i = 0;
    if(to_find[0] == '\0')
        return (str);
    while (str[i])
    {
        j = 0;
        while (str[i + j] == to_find[j] && to_find[j])
            j++;        
        if(to_find[j] == '\0')
            return(str + i);
        i++;
    }
    return(0);
}
