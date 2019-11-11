/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strlcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccardozo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 16:05:08 by ccardozo          #+#    #+#             */
/*   Updated: 2019/11/07 15:08:51 by ccardozo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ft_strlcpy.c"

size_t	ft_strlcpy();

int main () {

	char dst[] = "made";
	char src[] = "holaadios";
	char dst1[] = "made";
	char src1[] = "holaadios";


	
	printf("\n\nResultado de la funcion original\n");
	printf("Antes:\n%s\n%s", dst, src);
	printf("\n%lu",strlcpy(dst, src, 4));
	printf("\n%s",dst);

	printf("\n\nResultado de la funcion\n");
	printf("Antes:\n%s\n%s", dst1, src1);
	printf("\n%zu",ft_strlcpy(dst1, src1, 4));
	printf("\n%s",dst1);
 	return(0);
}
