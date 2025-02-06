int	ft_strlen(char *str)
{
    int i;

    while(str[i])
        i++;
    return (i);
}
#include <stdio.h>
int main(void)
{
    char a[] = "Allan";

    printf("%d\n", ft_strlen(a));
    return 0;
}