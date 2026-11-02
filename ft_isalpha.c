int	ft_isalpha (int c)
{
	if ((c < 'A' || c > 'Z') && (c < 'a' || c > 'z'))
		return (0);
	return (1);
}

// #include <stdio.h>

// int main(void)
// {
// 	printf("Is alfa? \n%s\n", ft_isalpha('A') ? "Yes" : "Nope");
// }