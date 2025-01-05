/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugusto <laugusto@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 22:47:30 by laugusto          #+#    #+#             */
/*   Updated: 2025/01/04 23:00:10 by laugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(const char *s)
{
    int i = 0;

    while (*s++)
        i++;
    return (i);
}

int main()
{
    char str[5] = "Darks";
    
    printf("%i",ft_strlen(str));
}