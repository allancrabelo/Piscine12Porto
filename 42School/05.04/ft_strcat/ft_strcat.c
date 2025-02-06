char *ft_strcat(char *dest, const char *src)
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
		j++;
		i++;
	}
	dest[i] = '\0';
	return(dest);
}
#include <stdio.h>
int	main(void)
{
	char a[] = "42";
	char b[] = "School";

	printf("%s\n", ft_strcat(a, b));
	return 0;
}
