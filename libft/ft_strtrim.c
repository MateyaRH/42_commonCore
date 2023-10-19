/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 09:59:53 by codespace         #+#    #+#             */
/*   Updated: 2023/10/19 11:04:26 by codespace        ###   ########.fr       */
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

static int	set_index(char const *s1, char const *set, int i, int dir);

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i_start;
	int		i_end;
	char	*ret_str;

	i_start = 0;
	i_end = ft_strlen(s1) - 1;
	i_start = set_index(s1, set, i_start, 1);
	i_end = set_index(s1, set, i_end, -1);
	ret_str = ft_substr(s1, i_start, (size_t)(i_end - i_start + 1));
	return (ret_str);
}

#include <stdio.h>

int main(void)
{
	char *strs = "";
	char *s = "k+";

	char *r_s = ft_strtrim(strs, s);

	printf("String:\n%s\n", r_s);
}

static int	set_index(char const *s1, char const *set, int i, int dir)
{
	int	j;

	j = 0;
	while (set[j])
	{
		if (s1[i] == set[j])
		{
			j = 0;
			i += dir;
		}
		else
			j++;
	}
	return (i);
}