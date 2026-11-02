int	ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("Is it printable? \n%s\n", ft_isprint(' ') ? "Yes" : "Nope");
// }