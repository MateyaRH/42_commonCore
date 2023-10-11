/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mremenar <mremenar@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 11:07:50 by mremenar          #+#    #+#             */
/*   Updated: 2023/10/11 15:01:44 by mremenar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (i < (size - 1) && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	while (src[i])
		i++;
	return (i);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	const char str1[100] = "Ecole 42 !";
	char str2[10] = "SKOOL 42";
	char str3[10] = "SKOOL 42";
	
	printf("Result: %lu\n", strlcpy(str2, str1, 10));
	printf("Dest1: %s\n", str2);
	printf("Result: %lu\n", ft_strlcpy(str3, str1, 10));
	printf("Dest2: %s\n", str3);
}
*/