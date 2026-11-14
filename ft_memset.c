/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpodgorn <kpodgorn@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 23:56:41 by kpodgorn          #+#    #+#             */
/*   Updated: 2026/11/13 23:15:40 by kpodgorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*temp;

	temp = (unsigned char *)s;
	while (n > 0)
	{
		*temp = c;
		temp++;
		n--;
	}
	return (s);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
// 	char	str1[20] = "Hello, 42 World!";
// 	char	str2[20] = "Hello, 42 World!";

// 	ft_memset(str1, '*', 5);
// 	memset(str2, '*', 5);
// 	printf("Test 1 Standart: %s | Expected: %s\n", str1, str2);

// 	ft_memset(str1, 'X', 0);
// 	memset(str2, 'X', 0);
// 	printf("Test 2 (Zero len): %s | Expected: %s\n", str1, str2);

// 	ft_memset(str1, 321, 3);
// 	memset(str2, 321, 3);
// 	printf("Test 2 (Int > 255): %s | Expected: %s\n", str1, str2);

// 	return (0);
// }
/*
Functionality: Fills the first n bytes of the memory area 
pointed to by s with the constant byte (unsigned char)c. Returns s.
When to use: When initializing arrays, buffers, 
or structs with a uniform byte value.
*/
/* 
Casted in unsigned char because it represents exactly one byte (0 to 255) 
and avoids issues with negative values.
Created temp to preserve the starting point *s
*/