/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugusto <laugusto@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 12:42:18 by laugusto          #+#    #+#             */
/*   Updated: 2025/01/06 14:12:33 by laugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char    *ft_strdup(char *src)
{
        int     i;
        char *newStr;
        i   =   0;
        newStr = malloc(*src * sizeof(char *));
        if(!newStr)
            return (NULL);
        while (src[i] != '\0')
        {
            newStr[i] = src[i];
            i++;
        }
        newStr[i] = '\0';
        return(newStr);  
}

int main (void)
{
	char s2[] = "Hello";
    char *s1 = "a";
    
	printf("Old String = %s\n", s1); // Initial value
	printf("String i want to copy = %s\n", s2); // String to copy
    s1 = ft_strdup(s2); // Making the returning value of the function the value of s1
	printf("New String = %s", s1);
	printf("\n");

	return (0);
	
}