/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 14:15:13 by codespace         #+#    #+#             */
/*   Updated: 2023/10/23 14:19:47 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description 
** Outputs the character ’c’ to the given file descriptor.
** Return value: None
*/

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}