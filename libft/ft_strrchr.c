/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 09:54:28 by mremenar          #+#    #+#             */
/*   Updated: 2023/10/16 10:39:08 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;
	int l;
	
	l = ft_strlen(s);
	s += l;
	i = 0;
	while (*s != c && i++ <= l)
		s--;
	if (*s == c)
		return ((char *)s);
	return (0);
		
/*	int	i;

	i = 0;
	while(s[i])
	{
		while (s[i] == c && s[i])
		{
			s += i;
			i = 1;
			while (s[i] && s[i] != c)
				i++;
		}
		i++;
	}
	if (c == 0)
		s += i;
	if (*s == c)
		return ((char *)s);
	return (0);
	*/
}

#include <stdio.h>
#include <string.h>

int main(void)
{
	//const char str1[100] = "Ecole 42 !";
	char str2[100] = "SKOOL 42";
	char str3[100] = "SKOOL 42";
	
	printf("Result: %s\n", strrchr(str2, 'M'));
//	printf("Dest1: %s\n", str2);
	printf("Result: %s\n", ft_strrchr(str3, 'M'));
//	printf("Dest2: %s\n", str3);
}