int	ft_isdigit (int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("is digit: %d\n", ft_isdigit('a'));
// }