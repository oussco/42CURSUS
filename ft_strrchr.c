/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oba@student.42quebec.com <oba@student.42qu +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:27:37 by oba               #+#    #+#             */
/*   Updated: 2023/11/07 10:05:08 by oba@student.42qu ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		x;

	str = (char *)s;
	x = ft_strlen(str);
	while (x >= 0)
	{
		x--;
		if (str[x] == c)
		{
			return (str + x);
		}
	}
	return (0);
}
