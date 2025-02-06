char *ft_str_to_uppercase(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		if(str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return(str);
}
#include <stdio.h>
int	main(void)
{
	char a[] = "Allan";

	printf("%s\n", ft_str_to_uppercase(a));
	return 0;
}