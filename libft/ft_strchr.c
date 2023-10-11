/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mremenar <mremenar@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 17:31:46 by mremenar          #+#    #+#             */
/*   Updated: 2023/10/11 17:44:40 by mremenar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;
	char *p;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	p = &s[i];
	return (p);
}

#include <stdio.h>
#include <string.h>

int main(void)
{
	//const char str1[100] = "Ecole 42 !";
	char str2[100] = "SKOOL 42";
	char str3[100] = "SKOOL 42";
	
	printf("Result: %s\n", strchr(str2, 'O'));
	printf("Dest1: %s\n", str2);
	printf("Result: %s\n", ft_strchr(str3, 'O'));
	printf("Dest2: %s\n", str3);
}