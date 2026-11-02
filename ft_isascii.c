int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

// #include <stdio.h>

// int main(void)
// {
// 	int result = ft_isascii(128);
// 	printf("Is ascii?\n");
// 	if (result == 1)
// 		printf("Yes!\n");
// 	else
// 		printf("Nope!\n");
// }