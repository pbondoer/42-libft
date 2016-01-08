/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbondoer <pbondoer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 00:41:10 by pbondoer          #+#    #+#             */
/*   Updated: 2016/01/08 01:02:04 by pbondoer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strstr(const char *s1, const char *s2)
{
	char *a;
	char *b;

	while (*s1)
	{
		a = s1;
		b = s2;
		while (*b && *a == *b)
		{
			a++;
			b++;
		}
		if (*b == '\0')
			return s1;
		s1++;
	}
	return (NULL);
}
