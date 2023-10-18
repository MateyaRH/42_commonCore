/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:50:36 by mremenar          #+#    #+#             */
/*   Updated: 2023/10/18 16:47:21 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: N/A
** SYNOPSIS: extract substring from string
**
** DESCRIPTION:
** 		Allocates (with malloc(3)) and returns a substring from the string ’s’.
**	The substring begins at index ’start’ and is of maximum size ’len’.
*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int len_s;
	char *dst;

	len_s = ft_strlen(s);
	if (!s || ((start + 1) > len_s))
		return 0;
	if ((start + len) > len_s)
		len = len_s - start;
	if (!(dst = malloc(len + 1)))
		return NULL;
	i = 0;
	while (i < len)
	{
		dst[i] = s[start];
		i++;
		start++;
	}
	dst[i] = 0;
	return dst;
}

#include <stdio.h>

int	main(void)
{
	char *str = "Ecole 42";
	//char *str2;

	printf("Result: %s\n", ft_substr(str, 7, 7));
}