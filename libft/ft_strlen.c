/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mremenar <mremenar@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:54:00 by mremenar          #+#    #+#             */
/*   Updated: 2023/10/09 18:11:51 by mremenar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while(s[i] != 0)
		i++;
	return (i);
}
/*
#include <stdio.h>

int main(void)
{
	char str[10] = "Ecole 42";
	
	printf("Size is %i characters.\n", ft_strlen(str));
}
*/