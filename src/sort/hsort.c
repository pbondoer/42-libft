/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hsort.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbondoer <pbondoer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/14 11:49:53 by pbondoer          #+#    #+#             */
/*   Updated: 2017/12/14 14:22:24 by pbondoer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <inttypes.h>

inline void	*elem(t_array a, size_t pos)
{
	return ((void *)((char *)a.ptr + pos * a.size));
}

inline void	swap(t_array a, size_t first, size_t second)
{
	void *buf;

	buf = ft_memalloc(a.size);
	if (!buf)
		return ;
	ft_memmove(buf, elem(a, first), a.size);
	ft_memmove(elem(a, first), elem(a, second), a.size);
	ft_memmove(elem(a, second), buf, a.size);
	ft_memdel(&buf);
}

inline void	sift_down(t_array a, size_t start, size_t end,
				int (*compar)(const void *, const void *))
{
	size_t root;
	size_t child;
	size_t selected;

	root = start;
	while (2 * root + 1 <= end)
	{
		child = 2 * root + 1;
		selected = root;
		if (compar(elem(a, selected), elem(a, child)) < 0)
			selected = child;
		if (child + 1 <= end &&
				compar(elem(a, selected), elem(a, child + 1)) < 0)
			selected = child + 1;
		if (selected == root)
			return ;
		swap(a, root, selected);
		root = selected;
	}
}

void		ft_hsort(void *base, size_t num, size_t size,
				int (*compar)(const void *, const void *))
{
	intmax_t	cur;
	t_array		a;

	a.ptr = base;
	a.size = size;
	cur = (num) / 2 - 1;
	while (cur >= 0)
	{
		sift_down(a, cur, num - 1, compar);
		cur--;
	}
	cur = num - 1;
	while (cur > 0)
	{
		swap(a, cur, 0);
		cur--;
		sift_down(a, 0, cur, compar);
	}
}
