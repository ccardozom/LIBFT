/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_toupper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccardozo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 16:05:08 by ccardozo          #+#    #+#             */
/*   Updated: 2019/11/07 12:37:49 by ccardozo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "ft_toupper.c"

int ft_toupper();

int main () {

	printf("\n\nResultado de la funcion original\n");
	printf("Antes: '-'\nDespues: ");
	printf("%c",toupper('-'));

	printf("\n\nResultado de la funcion\n");
	printf("Antes: '-'\nDespues: ");
	printf("%c",ft_toupper('-'));

 	return(0);
}
