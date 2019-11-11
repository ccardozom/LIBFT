/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccardozo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 15:20:34 by ccardozo          #+#    #+#             */
/*   Updated: 2019/11/07 09:56:53 by ccardozo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "ft_isalnum.c"

int	ft_isalnum();

int main()
{
	printf("\nEl resultado puede ser 0(no es un digito/caracter) o 1(si es un digit/caracter):  %d\n", isalnum('a'));
	printf("\nEl resultado puede ser 0(no es un digito/caracter) o 1(si es un digito/letra):  %d\n", ft_isalnum('2'));
	return 0;
}
