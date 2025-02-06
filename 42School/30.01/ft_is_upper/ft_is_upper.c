int ft_is_upper(const char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        if(str[i] <  'A' || str[i] > 'Z')
            return(0);
        i++;
    }
    return (1);
}

ft_putnbr(nb)
{
    if(n > 9)
    {
        ft_putnbr(nb / 10);
    }
    result = nb % 10
}