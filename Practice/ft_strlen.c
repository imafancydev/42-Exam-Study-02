#include <sys/types.h>
#include <stdio.h>
ssize_t     ft_strlen(char *str)
{
    ssize_t i = 0;
    if (!str)
        return 0;
    while (str[i])
        i++;
    return i;       
}

int     main(void)
{
    char str[5] = "lucas";
    printf("%li", ft_strlen(str));
}