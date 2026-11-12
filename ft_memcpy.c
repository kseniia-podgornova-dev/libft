/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kseniiapodgornova <kseniiapodgornova@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 22:01:26 by kpodgorn          #+#    #+#             */
/*   Updated: 2026/11/12 23:46:47 by kseniiapodg      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	if (!dest && !src)
		return (NULL);
	unsigned char		*temp_dest;
	const unsigned char	*temp_src;

	temp_dest = (unsigned char *)dest;
	temp_src = (const unsigned char	*)src;
	while (n > 0)
	{
		*temp_dest = *temp_src;
		temp_dest++;
		temp_src++;
		n--;
	}
	return (dest);
}

// #include <stdio.h>

// size_t ft_strlen(char *s)
// {
// 	size_t	len;

// 	len = 0;
// 	while (s[len])
// 		len++;
// 	return (len);
// }

// int main(void)
// {
// 	char	src[20] = "Hello, 42 World!";
// 	char	dst[20];

// 	printf("Before copy: dst = '%s'\n", dst);
// 	ft_memcpy(dst, src, ft_strlen(src));
// 	printf("After copy: dst = '%s'\n\n", dst);
	
// 	// Test with partial copy
// 	char	partial[20] = "XXXXXXXXXXX";
// 	ft_memcpy(partial, src, 5);
// 	partial[5] = '\0';
// 	printf("Partial copy (5 chars): '%s'\n\n", partial);
	
// 	// Test with integer array
// 	int	number_src[5] = {1,2,3,4,5};
// 	int	number_dest[5] = {0};
// 	ft_memcpy(number_dest, number_src, sizeof(number_src));
// 	printf("Numbers after copy: ");
// 	int	i = 0;

// 	while (i < 5)
// 	{
// 		printf("%d", number_dest[i]);
// 		i++;
// 	}
// 	// for (int i = 0; i < 5; i++)
// 	// {
// 	// 	printf("%d", number_dest[i]);
// 	// }
// 	return (0);
// }
/*
Functionality: Copies exactly n bytes from src to dest. 
The memory areas must not overlap. Returns dest.
When to use: When duplicating raw blocks of memory (arrays, structs)
where source and destination are separate.
*/