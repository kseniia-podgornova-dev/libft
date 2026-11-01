int	ft_isalpha (int c)
{
	if ((c < 'A' || c > 'Z') && (c < 'a' || c > 'z'))
		return (0);
	return (1);
}

// #include <stdio.h>
// int main(void)
// {
// 	printf("is alfa: %d\n", ft_isalpha ('5'));
// }