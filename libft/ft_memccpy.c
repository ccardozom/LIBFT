/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccardozo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 16:01:42 by ccardozo          #+#    #+#             */
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
}
