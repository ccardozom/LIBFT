/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccardozo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 13:27:40 by ccardozo          #+#    #+#             */
/*   Updated: 2019/11/05 17:19:38 by ccardozo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <strings.h>
#include "ft_memcpy.c"

void *ft_memcpy();

int main () {
   char src[] = "http://www.tutorialspoint.com";
   char dest[] = "Helloooo";

   printf("Before memcpy dest = %s\n", dest);
   memcpy(dest, src, 5);
   printf("After memcpy dest = %s\n", dest);

   
   char dst[] = "Helloooo";
   printf("Before memcpy dest = %s\n", dst);
   ft_memcpy(dst, src, 5);
   printf("After memcpy dest = %s\n", dst);


   return(0);
}
