/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mremenar <mremenar@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:39:32 by mremenar          #+#    #+#             */
/*   Updated: 2023/10/09 15:20:09 by mremenar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

int ft_isalpha(int c)
{
    if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        return (1);
    else
        return (0);
}
/*
#include <stdio.h>
int main(int argc, char **argv)
{
    if (argc == 2)
        if (ft_isalpha(*argv[1]) == 1)
            printf("Is alpha!");
        else
            printf("Isn't alpha!");
    else
        printf("one character");
    return (0);
        
}*/