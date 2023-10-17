/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 17:31:46 by mremenar          #+#    #+#             */
/*   Updated: 2023/10/17 15:57:41 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Function strchr assumes it is searching for c in a NULL terminated string*/

char	*ft_strchr(const char *s, int c)
{
	while (*s != 0 && *s != c)
		s++;
	if (*s == c)
		return ((char*)s);
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	//const char str1[100] = "Ecole 42 !";
	char str2[100] = "SKOOL 42";
	char str3[100] = "SKOOL 42";
	
	printf("Result: %s\n", strchr(str2, '\0'));
	printf("Dest1: %s\n", str2);
	printf("Result: %s\n", ft_strchr(str3, '\0'));
	printf("Dest2: %s\n", str3);
}
*/