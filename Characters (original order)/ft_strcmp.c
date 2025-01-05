/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugusto <laugusto@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 23:20:52 by laugusto          #+#    #+#             */
/*   Updated: 2025/01/04 23:38:33 by laugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int    ft_strcmp(char *s1, char *s2)
{
    int i = 0;
    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
        i++;
    return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

#include <stdio.h>

int main (void)
{
	char s1[] = "Hello";
	char s2[] = "Hello";
	char s3[] = "41 uptoo";
	char s4[] = "42 uptoo";
	char s5[] = "Hello friend, good luck 111";
	char s6[] = "Bye, seeya";

	printf("Compare s1 and s2 = %d\n", ft_strcmp(s1,s2));
	printf("\n");

	printf("Compare s3 and s4 = %d\n", ft_strcmp(s3,s4));
	printf("\n");

	printf("Compare s5 and s6 = %d\n", ft_strcmp(s5,s6));
	printf("\n");

	return (0);
	
}