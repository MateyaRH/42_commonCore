/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mremenar <mremenar@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:21:47 by mremenar          #+#    #+#             */
/*   Updated: 2023/10/09 15:52:26 by mremenar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <libft.h>

int ft_isdigit(int c)
{
    return(c >= '0' && c <= '9');
}

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