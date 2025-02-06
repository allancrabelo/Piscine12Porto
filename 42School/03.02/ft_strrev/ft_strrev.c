char    *ft_strrev(char *str)
{
	int i;
	int j;
	char swap;

	i = 0;
	j = 0;
	while(str[j])
		j++;
	j--;
	while(i < j)
	{
		swap = str[i];
		str[i] = str[j];
		str[j] = swap;
		i++;
		j--;
	}
	return (str);
}
#include <stdio.h>
int	main(void)
{
	char a[] = "42 School";
	printf("%s\n", ft_strrev(a));
	return 0;
}