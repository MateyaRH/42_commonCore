/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mremenar <mremenar@student.42.fr>        +#+  +:+       +#+          */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 14:20:39 by mremenar         #+#    #+#              */
/*   Updated: 2023/10/23 14:30:11 by mremenar        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

/*
** Description 
** Outputs the string ’s’ to the given file descriptor.
** Return value: None
*/

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	len;

	len = ft_strlen(s);
	write(fd, s, len);
}
/*
int	main(void)
{
	ft_putstr_fd("Ecole 42", 1);
}*/