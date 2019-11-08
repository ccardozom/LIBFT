/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccardozo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 15:20:34 by ccardozo          #+#    #+#             */
/*   Updated: 2019/11/05 15:52:59 by ccardozo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ft_bzero.c"

void ft_bzero();

int main()
{
	char str[] = "GeeksForGeeks is for programming geeks.";

	printf("\nBefore memset(): %s\n", str);
	bzero(str, 6);
	printf("\nAfter memset():  %s\n", str);

	printf("\nBefore memset(): %s\n", str+7);
	ft_bzero(str, 9);
	printf("\nAfter memset():  %s\n", str+10);



	return 0;
}
