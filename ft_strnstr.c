/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbondoer <pbondoer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 00:32:11 by pbondoer          #+#    #+#             */
/*   Updated: 2015/12/07 20:52:42 by pbondoer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t i;
	size_t j;

	if (*s2 == 0)
		return ((char *)s1);
	i = 0;
	while (s1[i] && i < n)
	{
		j = 0;
		while (s1[i] && i < n && s2[j] && s1[i] == s2[j])
		{
			j++;
			i++;
		}
		if (s2[j] == 0)
			return ((char *)(s1 + i - j));
		i -= j;
		i++;
	}
	return (NULL);
}
