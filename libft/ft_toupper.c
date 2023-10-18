/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 15:28:41 by mremenar          #+#    #+#             */
/*   Updated: 2023/10/18 15:45:50 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <ctype.h>
** SYNOPSIS: lower case to upper case letter conversion
**
** DESCRIPTION:
** 		The toupper() function converts a lower-case letter to the corresponding
**	upper-case letter.
*/

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
/*
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	unsigned char a = 0;
	printf("R1: %c\n", (char)toupper(a));
	printf("R1: %c\n", (char)ft_toupper(a));
}
*/