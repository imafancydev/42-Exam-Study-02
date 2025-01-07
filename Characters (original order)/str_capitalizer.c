/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugusto <laugusto@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 15:48:16 by laugusto          #+#    #+#             */
/*   Updated: 2025/01/06 23:38:20 by laugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_space(char c)
{
	if (c <= 32)
		return (1);
	return (0);
}

void	str_capitalazer(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if ((str[i] >= 'a' && str[i] <= 'z') && is_space(str[i - 1]))
			str[i] -= 32;
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int gc, char **gv)
{
	if (gc == 1)
	{
		write(1, "\n", 1);
		return (0);
	}

	int i = 1;
	while (i < gc)
	{
		str_capitalazer(gv[i]);
		write(1, "\n", 1);
		i++;
	}
}