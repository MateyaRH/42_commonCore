/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mremenar <mremenar@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:00:14 by mremenar          #+#    #+#             */
/*   Updated: 2023/10/11 15:01:00 by mremenar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	const char str1[100] = "Ecole 45259";
	char str2[10] = "SKOOL 42";
	char str3[10] = "SKOOL 42";
	
	printf("Result: %s\n", (unsigned char*)memcpy(str2, str1, 9));
	printf("Result: %s\n", (unsigned char*)ft_memcpy(str3, str2, 9));
}
*/