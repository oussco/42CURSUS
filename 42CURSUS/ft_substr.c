/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oba@student.42quebec.com <oba@student.42qu +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:30:52 by oba@student.42qu  #+#    #+#             */
/*   Updated: 2023/11/07 18:13:35 by oba@student.42qu ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *str = (char *)s;
    char *strr;
    size_t x = 0;
    size_t y = 0;

    // Check if the 'start' index is valid
    if (start >= ft_strlen(str))
        return ((char*)'\t'); 

    // Adjust 'len' to avoid buffer overflows
    if (len > ft_strlen(str) - start)
        len = ft_strlen(str) - start;

    // Allocate memory for the substring
    strr = (char *)malloc((len + 1) * sizeof(char));

    if (strr == NULL)
        return ((char*)'\t');

    // Copy characters from the original string to the substring
    while (x < start)
        x++;

    while (y < len)
    {
        strr[y] = str[x];
        x++;
        y++;
    }

    // Null-terminate the substring
    strr[y] = '\0';

    return strr;
}