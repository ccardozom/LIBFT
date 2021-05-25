/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccardozo <ccardozo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 19:58:38 by ccardozo          #+#    #+#             */
/*   Updated: 2021/05/25 09:16:31 by ccardozo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *h, const char *n, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!n)
		return ((char *)h);
	while (h[i] && i < len)
	{
		j = 0;
		while (n[j] == h[i + j] && i + j < len)
		{
			if (n[j + 1] == '\0')
			{
				return ((char *)h + i);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
