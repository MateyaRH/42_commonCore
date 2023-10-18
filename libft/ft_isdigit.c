/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:21:47 by mremenar          #+#    #+#             */
/*   Updated: 2023/10/18 15:27:25 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <ctype.h>
** SYNOPSIS: decimal-digit character test
**
** DESCRIPTION:
** 		The isdigit() function tests for a decimal digit character.
*/

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/*
#include <stdio.h>
int main(void)
{
	unsigned char d;

	d = 5;
	if (ft_isdigit(d) == 1)
		printf("Is digit!");
	else
		printf("Isn't digit!");
	return (0);     
}
*/