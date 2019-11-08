/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccardozo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 10:32:11 by ccardozo          #+#    #+#             */
/*   Updated: 2019/11/07 15:01:07 by ccardozo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlcpy(char *dest, char *src, size_t dstsize)
{
	unsigned int i;

	i = 0;
	if (dstsize == 0)
	{
	}
	else
	{
		while (i <= (dstsize - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[dstsize - 1] = '\0';
	}
	i = 0;
	while (*src != '\0')
	{
		src++;
		i++;
	}
	return (i);
}
