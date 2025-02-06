int ft_strlen(const char *str)
{
	int i;
	i = 0;
	while(str[i])
		i++;
	return (i);
}

int vowel_verfication(char c)
{
	return(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || 
	c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

char *ft_remove_vowels(const char *str)
{
	int i;
	int j;
	char *dest[ft_strlen(str + 1)];

	i = 0;
	j = 0;
	while(str[i])
	{
		if(vowel_verfication(str[i]) == 0)
			i++;
		dest[j] = str[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
#include <stdio.h>

int	main(void)
{
	char a[] = "Escola 42";

	ft_remove_vowels(a);
	printf("%s\n", a);
	return 0;
}