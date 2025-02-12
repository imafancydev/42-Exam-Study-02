#include <stdio.h>
#include <string.h>

int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

int	main(void)
{
	char str1[3] = "abc";
	char str2[3] = "abc";

	printf("%i", ft_strcmp(str1, str2));
	printf("%i", strcmp(str1, str2));
}