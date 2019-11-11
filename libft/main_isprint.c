/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_print.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccardozo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 15:20:34 by ccardozo          #+#    #+#             */
/*   Updated: 2019/11/07 10:14:46 by ccardozo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "ft_isprint.c"

int	ft_print();

int main()
{
	printf("\nEl resultado puede ser 0(no es imprimible) o 1(si es imprimible):  %d\n", isprint('^'));
	printf("\nEl resultado puede ser 0(no es imprimible) o 1(si es imprimible):  %d\n", ft_isprint('^'));
	return 0;
}
