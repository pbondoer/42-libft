/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbondoer <pbondoer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 15:20:21 by pbondoer          #+#    #+#             */
/*   Updated: 2015/11/26 15:33:26 by pbondoer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t len;
	size_t i;

	len = ft_strlen(src);
	if (len > n) len = n;
	i = 0;
	while (i < len)
		dst[i] = src[i];
	while (i < n)
		dst[i] = '\0';
	return (dst);
}
