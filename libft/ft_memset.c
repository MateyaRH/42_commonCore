/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mremenar <mremenar@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:28:20 by mremenar          #+#    #+#             */
/*   Updated: 2023/10/11 14:59:55 by mremenar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	int	i;

	i = 0;
	while (n--)
		((unsigned char *)str)[i++] = c;
	return (str);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[10] = "Ecole 42";
	
	printf("Result: %s\n", (unsigned char*)memset(str, 'A', 5));
	printf("Result: %s\n", (unsigned char*)ft_memset(str, 'A', 5));
}
*/