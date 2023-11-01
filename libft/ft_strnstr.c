/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mremenar <mremenar@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 12:40:12 by mremenar          #+#    #+#             */
/*   Updated: 2023/11/01 16:43:13 by mremenar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <string.h>
** SYNOPSIS: locate a substring in a string (size-bounded)
**
** DESCRIPTION:
** 		The strnstr() function locates the first occurrence of the null-termi-
**	nated string s2 in the string s1, where not more than n characters are
**	searched.  Characters that appear after a `\0' character are not
**	searched.
*/

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	len_s2;

	len_s2 = ft_strlen(s2);
	if (len_s2 == 0)
		return ((char *)s1);
	if (len_s2 > n || !(ft_strlen(s1)))
		return (0);
	while (s1 && (len_s2 <= n))
	{
		if (ft_strncmp (s1, s2, len_s2) == 0)
			return ((char *)s1);
		s1++;
		n--;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{

	//char s1[] = "lorem ipsum dolor sit amet";
	char s2[] = "ipsum";
	size_t n = 15;
	//printf("Result: %s\n", strnstr(((void *)0), s2, n));
	printf("Result: %s\n", ft_strnstr(((void *)0), s2, n));
	//ft_strnstr(s2, s1, n);
}*/