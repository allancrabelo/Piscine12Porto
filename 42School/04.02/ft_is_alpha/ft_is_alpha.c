int ft_is_alpha(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		if(!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')))
			return 0;
		i++;
	}
	return(1);
}
#include <stdio.h>
int	main(void)
{
	char a[] = "School";

	printf("%d\n", ft_is_alpha(a));
	return 0;
}