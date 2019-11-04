/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccardozo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 11:49:26 by ccardozo          #+#    #+#             */
/*   Updated: 2019/11/04 12:47:10 by ccardozo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

void ft_memset(void *b, int c, size_t len)
{
	size_t i;
	char* p; 

	i = 0;
	p = (char*)b;
	while (i != len)
	{
		p[i] = c;
		i++;
	}
}


int main()
{
    char str[50] = "GeeksForGeeks is for programming geeks.";
    printf("\nBefore memset(): %s\n", str);

    // cambia los primero 7 caracteres de str por puntos
    ft_memset(str, '.', 7);

    printf("After memset():  %s", str);
    return 0;
}
