/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccardozo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 13:17:38 by ccardozo          #+#    #+#             */
/*   Updated: 2019/11/11 19:47:14 by ccardozo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strrchr(const char *src, int c)
{
	int i;

	i = 0;
	while (*src)
	{
		if (*src == c)
			i = 1;
		src++;
	}
	if (i == 0)
		return (NULL);
	while (*src != c)
		src--;
	return ((char*)src);
}
