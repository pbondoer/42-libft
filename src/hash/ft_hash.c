/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hash.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbondoer <pbondoer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 22:03:19 by pbondoer          #+#    #+#             */
/*   Updated: 2018/11/12 22:05:53 by pbondoer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_hash(const char *str)
{
	int i;
	int hash;

	i = 0;
	hash = 0;
	while (str[i])
	{
		hash = (hash << 5) - hash + str[i];
		i++;
	}

	return (hash);
}
