/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugusto <laugusto@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 23:14:05 by laugusto          #+#    #+#             */
/*   Updated: 2025/01/09 23:38:42 by laugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(int gc, char **gv)
{
	if (gc != 4)
	{
		write(1, "\n", 1);
		return (0);
	}

	int i = 0;

	if (ft_strlen(gv[2]) == 1 && ft_strlen(gv[3]) == 1)
	{
		while (gv[1][i])
		{
			if (gv[1][i] == gv[2][0])
				gv[1][i] = gv[3][0];
			write(1, &gv[1][i], 1);
			i++;
		}
	}

	while (gv[1][i])
	{
		write(1, &gv[1][i], 1);
		i++;
	}

	write(1, "\n", 1);
	return (0);
}