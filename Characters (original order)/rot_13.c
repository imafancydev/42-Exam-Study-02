/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugusto <laugusto@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 13:05:44 by laugusto          #+#    #+#             */
/*   Updated: 2025/01/14 13:56:24 by laugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int gc, char **gv)
{
    if (gc != 2)
    {
        write(1, "\n", 1);
        return 0;
    }

    int i = 0;

    while (gv[1][i])
    {
        if (gv[1][i] >= 'a' && gv[1][i] <= 'z')
            gv[1][i] = ((gv[1][i] - 'a' + 13) % 26 + 'a');
        else if (gv[1][i] >= 'A' && gv[1][i] <= 'Z')
            gv[1][i] = ((gv[1][i] - 'A' + 13) % 26 + 'A');
        write(1, &gv[1][i], 1);
        i++;
    }

    write(1, "\n", 1);
    return 0;
}

/*
Example:

$>./rot_13 "abc" | cat -e
nop$
$>./rot_13 "My horse is Amazing." | cat -e
Zl ubefr vf Nznmvat.$
$>./rot_13 "AkjhZ zLKIJz , 23y " | cat -e
NxwuM mYXVWm , 23l $
$>./rot_13 | cat -e
$
$>
$>./rot_13 "" | cat -e
$
$>
*/