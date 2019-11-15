/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strnstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccardozo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 16:05:08 by ccardozo          #+#    #+#             */
/*   Updated: 2019/11/15 15:16:46 by ccardozo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ft_strnstr.c"

char *strnstr();

int main () {

	char dst[] = "carlos cardozo medina";
	char src[] = "carlos cardoz";
	char dst1[] = "carlos cardozo medina";
	char src1[] = "carlos cardoz";


	
	printf("\n\nResultado de la funcion original\n");
	printf("Antes:\n%s\n%s", dst, src);
	printf("\n%s",strnstr(dst, src, 13));
	printf("\n%s",dst);

	printf("\n\nResultado de la funcion\n");
	printf("Antes:\n%s\n%s", dst1, src1);
	printf("\n%s",ft_strnstr(dst1, src1, 14));
	printf("\n%s",dst1);
	return(0);
}
