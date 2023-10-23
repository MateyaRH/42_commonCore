/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 14:47:08 by codespace         #+#    #+#             */
/*   Updated: 2023/10/23 16:29:28 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description Outputs the integer ’n’ to the given file descriptor.
** Return value: None
*/

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int digit;
	
	if (n < 0)
	{
		write(fd, "-", 1);
		ft_putnbr_fd((-(n / 10)), fd);
		ft_putnbr_fd((-(n % 10)), fd);
	}
	else
	{
		if (n > 9)
		{
			ft_putnbr_fd(n / 10, fd);
			ft_putnbr_fd(n % 10, fd);
		}
		else
		{
			digit = n + '0';
			write(fd, &digit, 1);
		}
	}
}

int	main(void)
{
	ft_putnbr_fd(0, 1);
	return (0);
}