/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugusto <laugusto@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 23:36:31 by laugusto          #+#    #+#             */
/*   Updated: 2025/01/08 20:04:53 by laugusto         ###   ########.fr       */
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
	int space_checker = 0;
	while (gv[1][i] == ' ' || gv[1][i] == '\t')
		i++;

	while (gv[1][i])
	{
		if (gv[1][i] == ' ' || gv[1][i] == '\t')
			space_checker = 1;
		else
		{
			if (space_checker)
			{
				space_checker = 0;
				write(1, " ", 1);
			}
			write(1, &gv[1][i], 1);
		}
		i++;
	}
	write(1, "\n", 1);
	return (0);
}