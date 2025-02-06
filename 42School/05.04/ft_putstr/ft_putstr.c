void	ft_putstr(char *str)
{
	while(*str)
		write(1, str++, 1);
}

int	main(void)
{
	char a[] = "42 School\n";
	ft_putstr(a);
	return 0;
}
