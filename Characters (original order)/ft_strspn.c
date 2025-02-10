#include <stddef.h>
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugusto <laugusto@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 13:57:23 by laugusto          #+#    #+#             */
/*   Updated: 2025/01/14 13:58:08 by laugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t ft_strspn(const char *s, const char *accept)
{
    size_t i = 0;
    size_t count = 0;

    while (*s)
    {
        /*
        accpet =
            l u c '\0'
                   |
        s = l u c a s
            0 1 2 3 4
                  |
        count = 3;
        */
        while (accept[i] && *s != accept[i])
            i++;
        if (accept[i] != '\0')
            return (count);

        i = 0;
        count++;
        s++;
    }
    return (count);
}

int main(void)
{
    const char *string = "lucas";
    const char *accept = "luc";
    printf("Length of initial segment accepted: %zu\n", ft_strspn(string, accept));

    return 0;
}