int    ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while(s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
#include <stdio.h>
int	main(void)
{
	char a[] = "ab";
	char b[] = "abc";

	printf("%d\n", ft_strcmp(a, b));
	return 0;
}