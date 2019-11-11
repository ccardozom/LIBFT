/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccardozo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 19:58:38 by ccardozo          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2019/11/11 19:09:19 by ccardozo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t			ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	a;
	size_t	b;
	size_t	res;
=======
/*   Updated: 2019/11/07 15:05:29 by ccardozo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t			ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int a;
	unsigned int b;
>>>>>>> da5134fdb1d71ecf126eb4a0bc2356108889cab6

	a = 0;
	b = 0;
	while (dest[a] != '\0')
		a++;
	if (size > a + 1)
		return (0);
	while (src[b] != '\0')
		b++;
	if (size == a + 1)
		b = b + (size - 1);
	else
<<<<<<< HEAD
		b = b + a;
	res = 0;
	while (src[res] != '\0' && a + 1 < size)
	{
		dest[a] = src[res];
		a++;
		res++;
	}
	dest[a] = '\0';
=======
		b = b + size;
>>>>>>> da5134fdb1d71ecf126eb4a0bc2356108889cab6
	return (b);
}
