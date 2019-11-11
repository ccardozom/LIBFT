/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccardozo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 15:20:34 by ccardozo          #+#    #+#             */
/*   Updated: 2019/11/07 10:10:24 by ccardozo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "ft_isascii.c"

int	ft_isascii();

int main()
{
	printf("\nEl resultado puede ser 0(no es un ascii) o 1(si es un ascii):  %d\n", isascii('^'));
	printf("\nEl resultado puede ser 0(no es un ascii) o 1(si es un ascii):  %d\n", ft_isascii('^'));
	return 0;
}
