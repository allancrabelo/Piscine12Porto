/* #include <stdio.h>
char *ft_is_palindrome(const char *str)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while(str[j])
        j++;
    j--;
    while(i < j)
    {
        if(str[i] != str[j])
            return NULL;
        i++;
        j--;
    }   
    return (char *)str;
} */
#include <stdio.h>
#include <limits.h>
int main(void)
{
/*     char a[] = "ararav"; */
    
/*     printf("%s\n", ft_is_palindrome(a)); */
    printf("%d\n", INT_MIN);

    return 0;
}