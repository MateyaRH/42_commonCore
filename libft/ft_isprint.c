/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mremenar <mremenar@student.42.fr>        +#+  +:+       +#+          */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:48:21 by mremenar          #+#    #+#             */
/*   Updated: 2023/10/18 15:27:56 by mremenar        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <ctype.h>
** SYNOPSIS: printing character test (space character inclusive)
**
** DESCRIPTION:
** 		The isprint() function tests for any printing character, including space
**	(` ').
*/

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
