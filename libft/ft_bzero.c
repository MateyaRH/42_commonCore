/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mremenar <mremenar@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 13:55:44 by mremenar          #+#    #+#             */
/*   Updated: 2023/10/10 13:55:44 by mremenar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, unsigned long n)
{
	unsigned long	i;

	i = 0;
	while(i < n)
	{
		((unsigned char*)s)[i] = 0;
		i++;
	}
}
/*
#include <stdio.h>

int main(void)
{
	char str2[10] = "Ecole";

	ft_bzero(str2, 3);
	
	printf("Result: %s\n", str2);
}
*/