/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mremenar <mremenar@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:13:44 by mremenar          #+#    #+#             */
/*   Updated: 2023/11/01 14:17:49 by mremenar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <string.h>
** SYNOPSIS: copy byte string
**
** DESCRIPTION:
** 		The memmove() function copies n bytes from string s2 to string s1.  The
**	two strings may overlap; the copy is always done in a non-destructive
**	manner.
*/

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dest_temp;
	unsigned char	*src_temp;

	if (!src && !dest)
		return (NULL);
	dest_temp = (unsigned char *)dest;
	src_temp = (unsigned char *)src;
	if ((dest > src) && ((src + n) > dest))
	{
		i = n - 1;
		while (i >= 0)
		{
			dest_temp[i] = src_temp[i];
			i--;
		}
	}
	else
		dest_temp = ft_memcpy(dest, src, n);
	return (dest_temp);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	const char str1[] = "lorem ipsum dolor sit amet";
	char str2[] = "lorem ipsum dolor sit amet";
	char str3[] = "lorem ipsum dolor sit amet";
	
	printf("Result: %s\n", (unsigned char *)memmove(str2, str1, 8));
	printf("Result: %s\n", (unsigned char *)ft_memmove(str3, str1, 8));
}
*/