int	ft_strlen(char *str)
{
	int i;
	i = 0;
	while(str[i])
		i++;
	return (i);
}

int ft_is_anagram(const char *str1, const char *str2)
{
	if(!(str1) || !(str2))
		return 0;

	if(ft_strlen(str1) == ft_strlen(str2))
	{
		int i;
		int j;
		int tab[ft_strlen(str1)] = {0};
		i = 0;
		j = 0;
		while(str1[i])
		{
			j = 0;
			while(str2[j])
			{
				if(tab[(int)str2[j]] == 0)
					tab[(int)str2[j]] = 1;
				j++;
			}
			i++;
		}
	}
	if(str1[i] == '\0')
		return 1;
	return 0;
}