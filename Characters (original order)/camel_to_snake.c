/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugusto <laugusto@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 22:40:31 by laugusto          #+#    #+#             */
/*   Updated: 2025/01/07 22:55:50 by laugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int     main(int gc, char **gv)
{
    if (gc != 2)
    {
        write(1, "\n",1);
        return 0;
    }

    int i = 0;

    while (gv[1][i])
    {
        if(gv[1][i] >= 'A' && gv[1][i] <= 'Z')
        {
            gv[1][i] += 32;
            write(1, "_",1);
        }
        write(1, &gv[1][i],1 );
        i++;
    }

       write(1, "\n",1);
        return 0;
}

/*
Tests

Examples:
$>./camel_to_snake "hereIsACamelCaseWord"
here_is_a_camel_case_word
$>./camel_to_snake "helloWorld" | cat -e
hello_world$
$>./camel_to_snake | cat -e
$
*/