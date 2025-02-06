int	palindrome(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while(str[i])
		i++;
	i--;
	while(j < i)
	{
		if(str[i] != str[j])
			return (0);
		j++;
		i--;
	}
	return (1);
}

#include <stdio.h>
int	main(int argc, char **argv)
{
	if(argc != 2)
	{
		printf("Input Error\n");
		return 0;
	}
	printf("%d\n", palindrome(argv[1]));
	return 0;
}