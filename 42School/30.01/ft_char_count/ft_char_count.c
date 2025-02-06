int ft_char_count(char *str, char c)
{
    int i = 0;
    int count = 0;
    while(str[i])
    {
        if(str[i] == c)
            count++;
        i++;
    }
    return (count);
}
#include <stdio.h>
int main(void)
{
    char a[] = "42 School";
    char c = 'o';

    printf("%d\n", ft_char_count(a, c));
    return 0;
}