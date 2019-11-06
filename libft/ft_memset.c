/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccardozo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 11:49:26 by ccardozo          #+#    #+#             */
/*   Updated: 2019/11/05 15:53:03 by ccardozo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void					*ft_memset(void *b, int c, size_t len)
{
	size_t				i;
	char				*a;
	unsigned char		j;

	j = (unsigned char)c;
	a = b;
	i = 0;
	while (i < len)
	{
		a[i] = c;
		i++;
	}
	return (0);
}
