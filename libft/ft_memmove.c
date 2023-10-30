/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mremenar <mremenar@student.42.fr>        +#+  +:+       +#+          */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:13:44 by mremenar          #+#    #+#             */
/*   Updated: 2023/10/18 15:30:03 by mremenar        ###   ########.fr        */
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
	unsigned char	*temp;

	i = 0;
	temp = (unsigned char *)src;
	while (i < n)
	{
		((unsigned char *)dest)[i] = temp[i];
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
	
	printf("Result: %s\n", (unsigned char *)memmove(str2, str1, 3));
	printf("Result: %s\n", (unsigned char *)ft_memmove(str3, str1, 3));
}
*/