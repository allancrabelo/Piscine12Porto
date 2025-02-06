char    *ft_strrev(char *str)
{
    int i;
    int j;
    char swap;

    i = 0;
    j = 0;
    while(str[i])
        i++;
    while(j < i)
    {
        swap = str[j];
        str[j] = str[i - 1];
        str[i - 1] = swap;
        j++;
        i--;
    }
   return (str);
}

#include <stdio.h>

int main(void)
{
    char a[] = "Allan";
    printf("%s\n", ft_strrev(a));
    return 0;
}