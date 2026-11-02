int	ft_isalnum (int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("Is alpha-numeric? \n%s\n", ft_isalnum(' ') ? "Yes" : "Nope");
// }