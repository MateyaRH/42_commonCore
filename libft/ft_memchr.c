/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 11:06:17 by codespace         #+#    #+#             */
/*   Updated: 2023/10/16 11:58:17 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n-- && *(unsigned char *)s != c)
		s++;
	if (*(unsigned char *)s == c)
		return ((unsigned char *)s);
	return (0);
}

#include <stdio.h>
#include <string.h>

int main(void)
{
	//const char str1[100] = "Ecole 42 !";
	char str2[100] = "SKOOL 42";
	char str3[100] = "SKOOL 42";
	
	printf("Result: %s\n", (unsigned char *)memchr(str2, 'M', 15));
	printf("Dest1: %s\n", str2);
	printf("Result: %s\n", (unsigned char *)ft_memchr(str3, 'M', 15));
	printf("Dest2: %s\n", str3);
}