/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccardozo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 10:32:11 by ccardozo          #+#    #+#             */
/*   Updated: 2019/09/18 15:20:51 by ccardozo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;

	i = 0;
	if (size == 0)
	{
	}
	else
	{
		while (i <= (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[size - 1] = '\0';
	}
	i = 0;
	while (*src != '\0')
	{
		src++;
		i++;
	}
	return (i);
}
