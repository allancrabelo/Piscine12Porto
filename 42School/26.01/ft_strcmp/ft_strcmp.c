int    ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while(s1[i] && s2[i] && s1[i] == s2[i])
        i++;
    return(s1[i] - s2[i]);
}
#include <stdio.h>
#include <string.h>

int main(void)
{
    char a[] = "Allan";
    char b[] = "Allanb";
    printf("%d\n", ft_strcmp(a, b));
    printf("%d\n", strcmp(a, b));
    return 0;
}