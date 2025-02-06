#include <stdlib.h>
#include <stdio.h>

int ft_strlen(char *str)
{
	int	i = 0;
	while(str[i])
		i++;
	return(i);
}

char    *ft_strdup(char *src)
{
	int i;
	char *dest;

	i = 0;
	dest = (char *)malloc(ft_strlen((src) + 1) * sizeof(char));
	if(!(dest))
		return(NULL);
	while(src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return(dest);
}

int	main(void)
{
	char a[] = "ABCD";

	printf("%s\n", ft_strdup(a));
	return 0;
}