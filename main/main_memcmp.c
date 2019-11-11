/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memcmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccardozo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 16:05:08 by ccardozo          #+#    #+#             */
/*   Updated: 2019/11/07 08:46:38 by ccardozo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <strings.h>
#include <stdlib.h>
#include "ft_memcmp.c"

int ft_memcmp();

int main () {

	char src1[] = "copia de la funcion";
	char src2[] = "copia de la funcion";
	
	printf("\n\nResultado de la funcion original strchr\n");
	printf("Antes:\n%s\n%s", src1, src2);
	printf("\n%d",memcmp(src1, src2, 6));

	printf("\n\nResultado de la funcion ft_strchr\n");
	printf("Antes:\n%s\n%s", src1, src2);
	printf("\n%d",ft_memcmp(src1, src2, 6));

 	return(0);
}
