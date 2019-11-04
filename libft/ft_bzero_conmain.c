/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccardozo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 12:48:09 by ccardozo          #+#    #+#             */
/*   Updated: 2019/11/04 13:16:22 by ccardozo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <strings.h>

void ft_bzero(void *s, size_t n)
{
	char* c;
	size_t i;
	
	c = s;
	i = 0;
	while (i < n)
	{
	c[i] = '\0';
	i++;
	}
}

int main()
{
    char str[50] = "GeeksForGeeks is for programming geeks.";
    printf("\nBefore memset(): %s\n", str);

  
    ft_bzero(str, 5);

    printf("After memset():  %s", str);
    return 0;
}
