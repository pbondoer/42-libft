/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbondoer <pbondoer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 23:19:39 by pbondoer          #+#    #+#             */
/*   Updated: 2015/11/25 23:32:02 by pbondoer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	cc;
	int				i;

	cc = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (s[i] == cc)
			return (s[i]);
		i++;
	}
	return (NULL);
}
