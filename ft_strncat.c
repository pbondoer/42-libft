/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbondoer <pbondoer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 16:18:31 by pbondoer          #+#    #+#             */
/*   Updated: 2015/11/28 16:46:20 by pbondoer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	len;
	char	*start;

	start = s1 + ft_strlen(s1);
	len = ft_strlen(s2);
	if (len > n) len = n;
	ft_memcpy(start, s2, len);
	ft_memset(start + len + 1, '\0', 1);
	return (s1);
}
