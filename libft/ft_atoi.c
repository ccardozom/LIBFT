/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccardozo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 08:20:01 by ccardozo          #+#    #+#             */
/*   Updated: 2019/11/18 10:59:22 by ccardozo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *s)

{
	int		p;
	long int	nb;

	nb = 0;
	while (*s == 32 || (*s >= 9 && *s <= 13))
		s++;
	p = (*s == '-') ? -1 : 1;
	(*s == '-' || *s == '+') ? s++ : s;
	while (ft_isdigit(*s))
	{
		nb = nb * 10 + (*s - '0');
		s++;
		if (nb * p > 2147483647)
			return (-1);
		if (nb * p < -2147483648)
			return (0);
	}
	return (nb * p);
}
