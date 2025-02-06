#include <stdlib.h>
char    *ft_strdup(char *src)
{
    int i;
    int len;
    char *dest;

    i = 0;
    len = 0;
    while(src[len])
        len++;
    dest = (char*)malloc((len + 1) * sizeof(char));
    if(!(dest))
        return NULL;
    while(src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return(dest);
}
#include <stdio.h>
int main(void)
{
    char a[] = "Allan";
    printf("%s\n", ft_strdup(a));
    return 0;
}