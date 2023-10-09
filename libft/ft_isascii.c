/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mremenar <mremenar@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:13:51 by mremenar          #+#    #+#             */
/*   Updated: 2023/10/09 17:28:45 by mremenar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return(c >= 0 && c <= 127);
}
/*
#include <stdio.h>
int main(void)
{
	unsigned char d;

	d = 128;
	if (ft_isascii(d) == 1)
		printf("Is ascii!");
	else
		printf("Isn't ascii!");
	return (0);     
}
*/