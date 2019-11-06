/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccardozo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 14:44:52 by ccardozo          #+#    #+#             */
/*   Updated: 2019/11/06 16:31:04 by ccardozo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *ps1;
	unsigned char *ps2;
	unsigned char c1;
	unsigned char c2;

	if (s1 && s2)
	{
		ps1 = (unsigned char*)s1;
		ps2 = (unsigned char*)s2;
		while (n--)
		{
			c1 = *(unsigned char*)ps1;
			c2 = *(unsigned char*)ps2;
			if ( c1 != c2)
				return (c1 - c2);
			ps1++;
			ps2++; 
		}
		return (0);
	}
	return (-1);
}
