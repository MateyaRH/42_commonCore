/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mremenar <mremenar@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 13:26:43 by mremenar          #+#    #+#             */
/*   Updated: 2023/10/11 15:13:14 by mremenar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	int		src_len;
	int		dst_len;

	i = 0;
	j = 0;
	src_len = ft_strlen(src);
	while (dst[i])
		i++;
	dst_len = i;
	if (i >= size)
		return (src_len + size);
	while (i < (size - 1) && src[j])
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dst_len + src_len);
}

#include <stdio.h>
#include <string.h>

int main(void)
{
	const char str1[100] = "Ecole 42 !";
	char str2[100] = "SKOOL 42";
	char str3[100] = "SKOOL 42";
	
	printf("Result: %lu\n", strlcat(str2, str1, 20));
	printf("Dest1: %s\n", str2);
	printf("Result: %lu\n", ft_strlcat(str3, str1, 20));
	printf("Dest2: %s\n", str3);
}