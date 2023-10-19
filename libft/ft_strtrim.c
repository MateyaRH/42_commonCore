/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 09:59:53 by codespace         #+#    #+#             */
/*   Updated: 2023/10/19 16:31:35 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: N/A
** SYNOPSIS: trim beginning and end of string with the specified characters
**
** DESCRIPTION:
** 		Allocates (with malloc(3)) and returns a copy of ’s1’ with the
**	characters specified in ’set’ removed from the beginning and the end of the
**	string.
*/

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i_start;
	int		i_end;
	char	*ret_str;

	i_start = 0;
	i_end = ft_strlen(s1) - 1;
	if (i_end < 0)
		return (ft_calloc(1, 1));
	while (s1[i_start] && ft_strchr(set, s1[i_start]))
		i_start++;
	while (s1[i_end] && ft_strchr(set, s1[i_end]))
		i_end--;
	ret_str = ft_substr(s1, i_start, (size_t)(i_end - i_start + 1));
	return (ret_str);
}

/*#include <stdio.h>

int main(void)
{
	char *strs = "++k+kkjkk+++kk+";
	char *s = "k+";

	char *r_s = ft_strtrim(strs, s);

	printf("String:\n%s\n", r_s);
}*/