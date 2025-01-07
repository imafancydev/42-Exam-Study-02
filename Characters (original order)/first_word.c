/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugusto <laugusto@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 13:15:53 by laugusto          #+#    #+#             */
/*   Updated: 2025/01/07 15:01:19 by laugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int     main(int gc, char **gv)
{
    if (gc != 2)
    {
        write(1, "\n",1 );
        return 0;
    }

    int i = 0;
    while (gv[1][i])
    {
        while (gv[1][i] == ' ' || gv[1][i] == 9)
            i++;
        while (gv[1][i] != '\0' && gv[1][i] != ' ' && gv[1][i] != 9 )
            write(1, &gv[1][i++], 1);
        break; 
    }
    write(1, "\n",1 );
        return 0;
}

/*
Tests
Examples:

$> ./first_word "FOR PONY" | cat -e
FOR$
$> ./first_word "this        ...       is sparta, then again, maybe    not" | cat -e
this$
$> ./first_word "   " | cat -e
$
$> ./first_word "a" "b" | cat -e
$
$> ./first_word "  lorem,ipsum  " | cat -e
lorem,ipsum$
$>
*/