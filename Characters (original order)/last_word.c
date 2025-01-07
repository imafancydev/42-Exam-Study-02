/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugusto <laugusto@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 15:02:57 by laugusto          #+#    #+#             */
/*   Updated: 2025/01/07 15:49:33 by laugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int     main(int gc, char **gv)
{
    if (gc != 2)
    {
        write(1, "\n", 1);
        return 0;
    }

    int i = 0;
    while (gv[1][i] != '\0')
        i++;
    i--;   
        while (i >= 0 && (gv[1][i] == 9 || gv[1][i] == 32))
            i--;
        while (i >= 0 && gv[1][i] != 9 && gv[1][i] != 32)
            i--;
    i++;
        while(gv[1][i] != '\0' && gv[1][i] != 9 && gv[1][i] != 32)
            write(1, &gv[1][i++], 1);
    write(1, "\n", 1);
        return 0;
}

/*
Tests


$> ./last_word "FOR PONY" | cat -e
PONY$
$> ./last_word "this        ...       is sparta, then again, maybe    not" | cat -e
not$
$> ./last_word "   " | cat -e
$
$> ./last_word "a" "b" | cat -e
$
$> ./last_word "  lorem,ipsum  " | cat -e
lorem,ipsum$
$>
*/