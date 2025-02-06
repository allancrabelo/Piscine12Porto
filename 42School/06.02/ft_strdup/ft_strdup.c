#include <stdlib.h>

int	ft_strlen(char *src)
{
	int i;

	i = 0;
	while(src[i])
		i++;
	return (i);
}

char    *ft_strdup(char *src)
{
	char *dest;
	int i;

	i = 0;
	dest = (char *)malloc(ft_strlen((src) + 1) * sizeof(char));
	if(!(dest))
		return (NULL);
	while(src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
#include <stdio.h>
int	main(void)
{
	char a[] = "42 School";

	printf("%s\n", ft_strdup(a));
	return 0;
}