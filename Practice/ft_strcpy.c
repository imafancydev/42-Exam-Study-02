#include <stdio.h>

char	*ft_strcpy(char *restrict dst, const char *restrict src)
{
	int	i;

	i = 0;

	while (src[i++])
		*dst++ = *src++;
	return dst;
}

int	main(void)
{
	char str1[3] = "abc";
	char str2[3];
	ft_strcpy(str2, str1);
	printf("%s", str2);
}