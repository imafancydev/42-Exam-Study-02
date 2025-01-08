/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugusto <laugusto@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 22:57:21 by laugusto          #+#    #+#             */
/*   Updated: 2025/01/07 23:35:21 by laugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int     main(int gc, char **gv)
{
    if (gc != 2)
    {
        write(1, "\n", 1);
        return 0;
    }

    int i = 0;

    while(gv[1][i])
    {
        
        if(gv[1][i] == '_')
        {
          i++;
          if(gv[1][i] >= 'a' && gv[1][i] <= 'z')
          {
                gv[1][i] -= 32;
                write(1,&gv[1][i],1 );
          }    
        }
        if(gv[1][i] >= 'a' && gv[1][i] <= 'z')
        {
            write(1, &gv[1][i],1);
        }
        i++;
    }
      write(1, "\n", 1);
        return 0;
}

/*
Tests

$>./snake_to_camel "here_is_a_snake_case_word" | cat -e
hereIsASnakeCaseWord
$>./snake_to_camel "hello_world" | cat -e
helloWorld$
$>./snake_to_camel | cat -e
$
*/