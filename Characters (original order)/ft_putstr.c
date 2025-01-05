/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugusto <laugusto@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 23:01:48 by laugusto          #+#    #+#             */
/*   Updated: 2025/01/04 23:13:46 by laugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void    ft_putchar(const char c)
{
    write(1, &c, 1);
}

void	ft_putstr(char *str)
{
    while (*str)
        ft_putchar(*str++);
}

int     main()
{
    char *str = "Good Job My Cute Wolf";

    ft_putstr(str);
}