/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 14:40:00 by codespace         #+#    #+#             */
/*   Updated: 2023/10/23 14:46:46 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description 
** Outputs the string ’s’ to the given file descriptor
** followed by a newline.
** Return value: None
*/

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}
/*
int	main(void)
{
	ft_putendl_fd("Ecole 42", 1);
}*/