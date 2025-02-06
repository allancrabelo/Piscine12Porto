char    *ft_strrev(char *str)
{
	int i;
	int j;
	char swap;

	j = 0;
	i = 0;
	while(str[i])
		i++;
	i--;
	while(j < i)
	{
		swap = str[i];
		str[i] = str[j];
		str[j] = swap;
		i--;
		j++;
	}
	return(str);
}

#include <stdio.h>
int	main(void)
{
	char a[] = "Allan";

	printf("%s\n", ft_strrev(a));
	return 0;
}