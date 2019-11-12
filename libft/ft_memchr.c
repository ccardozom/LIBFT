/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccardozo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 14:44:52 by ccardozo          #+#    #+#             */
/*   Updated: 2019/11/11 19:35:30 by ccardozo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *p;

	p = (unsigned char*)s;
	if (p == 0 && c == '\0' && n == 0)
		return (0);
	if (s)
	{
		while (n--)
		{
			if (*p == (unsigned char)c)
				return ((unsigned char*)p);
			p++;
		}
	}
	return (NULL);
}
