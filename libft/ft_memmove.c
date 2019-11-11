/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccardozo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 11:17:59 by ccardozo          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2019/11/11 15:21:56 by ccardozo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

=======
/*   Updated: 2019/11/06 13:08:21 by ccardozo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

>>>>>>> da5134fdb1d71ecf126eb4a0bc2356108889cab6
void		*ft_memmove(void *dst, void *src, size_t len)
{
	size_t	i;
	char	*pdst;
	char	*psrc;

	pdst = (void*)dst;
	psrc = (void*)src;
	if (src == dst)
		return (dst);
	if (src < dst)
	{
		i = len;
		while (i-- > 0)
			pdst[i] = psrc[i];
	}
	else
	{
		i = 0;
		while (i < len)
		{
			pdst[i] = psrc[i];
			i++;
		}
	}
	return (dst);
}
