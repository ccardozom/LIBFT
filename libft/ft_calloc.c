/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccardozo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 10:55:35 by ccardozo          #+#    #+#             */
/*   Updated: 2019/11/08 11:49:06 by ccardozo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		*ft_calloc(size_t count, size_t size)
{
	char	*ptr;
	size_t	i;

	if (count == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * count);
	i = 0;
	while (i <= count)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
