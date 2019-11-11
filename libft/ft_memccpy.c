/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccardozo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 16:01:42 by ccardozo          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2019/11/11 18:11:10 by ccardozo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void		*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr_dst;
	unsigned char	*ptr_src;

	ptr_dst = (unsigned char*)dst;
	ptr_src = (unsigned char*)src;
	i = 0;
	while (i < n)
	{
		ptr_dst[i] = ptr_src[i];
		if (ptr_dst[i] == (unsigned char)c)
			return ((void*)(dst + i + 1));
		++i;
	}
	return (NULL);
=======
/*   Updated: 2019/11/05 18:39:53 by ccardozo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void				*ft_memccpy(void *dst, void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	j;
	char			*pdst;
	char			*psrc;

	j = (unsigned)c;
	pdst = (void*)dst;
	psrc = (void*)src;
	i = 0;
	while (i < n)
	{
		if (psrc[i] != c)
			pdst[i] = psrc[i];
		else
		{
			pdst[i] = psrc[i];
			break ;
		}
		i++;
	}
	return (0);
>>>>>>> da5134fdb1d71ecf126eb4a0bc2356108889cab6
}
