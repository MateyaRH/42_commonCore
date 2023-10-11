/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mremenar <mremenar@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:21:49 by mremenar          #+#    #+#             */
/*   Updated: 2023/10/11 10:31:29 by mremenar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return ((ft_isalpha(c) > 0) || (ft_isdigit(c) > 0));
}
/*
#include <stdio.h>
int main(void)
{
	unsigned char d;

	d = 122;
	if (ft_isalnum(d) == 1)
		printf("Is alnum!");
	else
		printf("Isn't alnum!");
	return (0);     
}
*/