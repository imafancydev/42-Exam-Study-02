/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugusto <laugusto@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 19:35:30 by laugusto          #+#    #+#             */
/*   Updated: 2025/01/09 16:03:58 by laugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int gc, char **gv)
{
	if (gc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	int i = 0;
	while (gv[1][i] == ' ' || gv[1][i] == '\t')
		i++;
	while (gv[1][i])
	{
		if (gv[1][i] != ' ' || gv[1][i] != '\t')
			write(1, &gv[1][i], 1);
		i++;
		if (gv[1][i] == ' ' || gv[1][i] == '\t')
			write(1, "   ", 3);
		while (gv[1][i] == ' ' || gv[1][i] == '\t')
			i++;
	}
	write(1, "\n", 1);
	return (0);
}

/*

Tests
$> ./expand_str "See? It's easy to print the same thing" | cat -e
See?   It's   easy   to   print   the   same   thing$
$> ./expand_str " this        time it      will     be    more complex  " | cat -e
this   time   it   will   be   more   complex$
$> ./expand_str "No S*** Sherlock..." "nAw S*** ShErLaWQ..." | cat -e
$
$> ./expand_str "" | cat -e
$
$>
*/