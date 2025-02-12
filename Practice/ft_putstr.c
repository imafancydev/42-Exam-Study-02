#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return ((void)0);
	while (str[i])
		ft_putchar(str[i++]);
	return ((void)0);
}

int	main(void)
{
	char str[5] = "lucas";
	ft_putstr(str);
}