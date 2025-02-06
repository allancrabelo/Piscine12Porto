int ft_char_count(char *str, char c)
{
    int i;
    int count;

    i = 0;
    count = 0;
    while(str[i])
    {
        if(str[i] == c)
            count++;
        i++;
    }
    return(count);
}
#include <stdio.h>
int main(void)
{
    char a[] = "aline vitoria";
    char b = 'a';
    
    printf("%d\n", ft_char_count(a, b));
    return 0;
}