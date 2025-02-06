char *ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while(dest[i])
		i++;
	while(src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return(dest);
}

#include <stdio.h>

int	main(int argc, char **argv)
{
	if(argc != 3)
	{
		printf("Input Error\n");
		return 0;
	}
	printf("%s\n", ft_strcat(argv[1], argv[2]));
	return 0;
}
