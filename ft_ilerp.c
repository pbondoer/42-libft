/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ilerp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbondoer <pbondoer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/11 01:06:57 by pbondoer          #+#    #+#             */
/*   Updated: 2016/05/11 01:15:34 by pbondoer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

double	ft_ilerp(double val, double first, double second)
{
	return ((val - first) / (second - first));
}
