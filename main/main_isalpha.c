/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccardozo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 15:20:34 by ccardozo          #+#    #+#             */
/*   Updated: 2019/11/07 09:28:36 by ccardozo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "ft_isalpha.c"

int	ft_isalpha();

int main()
{
	printf("\nEl resultado puede ser 0(no es un caracter) o 1(si es un caracter):  %d\n", isalpha(' '));
	printf("\nEl resultado puede ser 0(no es un caracter) o 1(si es un caracter):  %d\n", ft_isalpha(' '));
	return 0;
}
