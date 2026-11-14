/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpodgorn <kpodgorn@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 18:38:30 by kpodgorn          #+#    #+#             */
/*   Updated: 2026/11/14 20:48:25 by kpodgorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*temp_dest;
	const unsigned char	*temp_src;
	size_t				i;

	temp_dest = (unsigned char *)dest;
	temp_src = (const unsigned char	*)src;
	if (temp_dest > temp_src)
	{
		while (n > 0)
		{
			n--;
			temp_dest[n] = temp_src[n];
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			temp_dest[i] = temp_src[i];
			i++;
		}
	}
	return (dest);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char	dest[10] = 	"Hallo!123";
// 	char	src[20] = 	"Hell!";
// 	char	str[20] = 	"123456789";
// 	void	*null_ptr = NULL;

// 	printf("Test with different blocks of memory (strings)\n");
// 	printf("Result: %s\n\n", (char *)ft_memmove(dest, src, ft_strlen(src) + 1));
// 	printf("Test with the same block of memory (inside same string)\n");
// 	printf("Result: %s\n\n", (char *)ft_memmove(str, str + 5, 2));
//  printf("Test my ft_memmove with NULL: %s\n\n", (char *)ft_memmove(null_ptr, str, 5));
// 	printf("Test original memmove ith NULL: %s\n", (char *)memmove(null_ptr, str, 5));
// }