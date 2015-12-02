/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbondoer <pbondoer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 01:05:06 by pbondoer          #+#    #+#             */
/*   Updated: 2015/12/02 02:56:28 by pbondoer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		nbr;
	char	neg;
	int		i;

	i = 0;
	while (ft_iswhitespace(str[i]))
		i++;
	neg = (str[i] == '-');
	if (str[i] == '-' || str[i] == '+')
		i++;
	nbr = 0;
	while (ft_isdigit(str[i]))
	{
		nbr = nbr * 10 + (str[i] - '0');
		i++;
	}
	return (neg ? -nbr : nbr);
}
