#include <stdlib.h>
#include <stdio.h>
int ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

int vowel_verification(char c)
{
	return(c == 'a' || c == 'e' ||c == 'i' ||c == 'o' ||c == 'u' ||
	c == 'A' ||c == 'E' ||c == 'I' ||c == 'O' ||c == 'U');
}

char *ft_remove_vowels(char *str)
{
	int i;
	int j;
	char *dest;

	dest = (char *)malloc(ft_strlen(str) + 1 * sizeof(char));
	i = 0;
	j = 0;
	while(str[i])
	{
		if(vowel_verification(str[i]) == 1)
			i++;
		dest[j] = str[i];
		i++;
		j++;	
	}
	return (dest);
}
int	main(void)
{
	char a[] = "Piscine42.";

	printf("%s\n", ft_remove_vowels(a));
	return 0;
}