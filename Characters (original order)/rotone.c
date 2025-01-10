/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugusto <laugusto@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 23:59:24 by laugusto          #+#    #+#             */
/*   Updated: 2025/01/10 00:17:20 by laugusto         ###   ########.fr       */
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

	while (gv[1][i])
	{
		if (gv[1][i] >= 'a' && gv[1][i] <= 'z' || gv[1][i] >= 'A'
			&& gv[1][i] <= 'Z')
		{
			if (gv[1][i] == 'z')
				gv[1][i] = 'a';
			else if (gv[1][i] == 'Z')
				gv[1][i] = 'A';
			else
				gv[1][i] += 1;
		}

		write(1, &gv[1][i], 1);
		i++;
	}

	write(1, "\n", 1);
	return (0);
}

/*
Tests


$>./rotone "abc"
bcd
$>./rotone "Les stagiaires du staff ne sentent pas toujours tres bon." | cat -e
Mft tubhjbjsft ev tubgg of tfoufou qbt upvkpvst usft cpo.$
$>./rotone "AkjhZ zLKIJz , 23y " | cat -e
BlkiA aMLJKa , 23z $
$>./rotone | cat -e
$
$>
$>./rotone "" | cat -e
$
$>
*/