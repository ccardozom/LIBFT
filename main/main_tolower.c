/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_tolower.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccardozo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 16:05:08 by ccardozo          #+#    #+#             */
/*   Updated: 2019/11/07 12:40:41 by ccardozo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "ft_tolower.c"

int ft_tolower();

int main () {

	printf("\n\nResultado de la funcion original\n");
	printf("Antes: 'A'\nDespues: ");
	printf("%c",tolower('A'));

	printf("\n\nResultado de la funcion\n");
	printf("Antes: 'A'\nDespues: ");
	printf("%c",ft_tolower('A'));

 	return(0);
}
