int ft_is_palindrome(const char *str)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while(str[i])
        i++;
    i--;
    while(str[i] == str[j] && str[j])
    {
        j++;
        i--;
    }
    if(str[j] == '\0')
        return(1);
    return(0);
}