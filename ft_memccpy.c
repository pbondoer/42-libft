/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbondoer <pbondoer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 22:48:36 by pbondoer          #+#    #+#             */
/*   Updated: 2015/12/11 22:08:11 by pbondoer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	uc;
	unsigned char	*dst_uc;
	unsigned char	*src_uc;

	i = 0;
	uc = (unsigned char)c;
	dst_uc = (unsigned char *)dst;
	src_uc = (unsigned char *)src;
	while (i < n)
	{
		if ((src_uc[i] = dst_uc[i]) == uc)
			return (&dst_uc[i + 1]);
		i++;
	}
	return (NULL);
}
