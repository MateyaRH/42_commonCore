/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 08:53:09 by codespace         #+#    #+#             */
/*   Updated: 2023/10/19 09:56:32 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: N/A
** SYNOPSIS: concatenate two strings into a new string (with malloc)
**
** DESCRIPTION:
** 		Allocates (with malloc(3)) and returns a new string, which is the
**	result of the concatenation of ’s1’ and ’s2’.
*/

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ret_str;
	size_t	len;
	
	len = (ft_strlen(s1) + ft_strlen(s2));
	if (!(ret_str = (char *)malloc((len + 1))))
		return (0);
	ft_strlcpy(ret_str, s1, (ft_strlen(s1) + 1));
	ft_strlcat(ret_str, s2, (len + 1));
	return ret_str;
}

/*#include <stdio.h>

int main(void)
{
	char *strs = "Hello world this is Ecole 42";
	char *s = "++";

	char *r_s = ft_strjoin(s, strs);

	printf("String:\n%s\n", r_s);
}*/
