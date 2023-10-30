/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mremenar <mremenar@student.42.fr>        +#+  +:+       +#+          */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 12:04:54 by mremenar          #+#    #+#             */
/*   Updated: 2023/10/18 14:51:46 by mremenar        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <string.h>
** SYNOPSIS: compare byte string
**
** DESCRIPTION:
** 		The memcmp() function compares byte string s1 against byte string s2.
**	Both strings are assumed to be n bytes long.
*/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
		{
			if ((((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]) < 0)
				return (-1);
			else
				return (1);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char s1[] = "MTbw";
	char s2[] = "MTbwuehf";
	size_t n = 5;
	printf("%d\n", memcmp(s1, s2, n));
	printf("%d\n", ft_memcmp(s1, s2, n));
}*/