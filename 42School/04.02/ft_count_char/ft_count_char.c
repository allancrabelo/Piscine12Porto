int ft_count_char(const char *str, char c)
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
int	main(int argc, char **argv)
{
	if(argc != 3)
	{
		printf("Input Error\n");	
		return 0;
	}
	printf("%d\n", ft_count_char(argv[1], argv[2][0]));	
	return 0;
}