/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpodgorn <kpodgorn@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 20:56:18 by kpodgorn          #+#    #+#             */
/*   Updated: 2026/11/14 22:12:17 by kpodgorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	dst_len = ft_strlen(dst);
	if (size <= dst_len)
		return (size + src_len);
	i = 0;
	while (src[i] && (dst_len + i) < size - 1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}

#include <stdio.h>
#include <string.h>
// #include <bsd/string.h>

int	main(void)
{
	char		dst[20] = "Hello, ";
	const char	*src = "World!";
	// char		*dst = NULL;
	// const char	*src = "World!";

	printf("%s", dst);
	printf("%s\n", src);
	printf("%zu\n", ft_strlcat(dst, src, 10));
	printf("%zu\n", ft_strlcat(dst, src, 5));
	// printf("Test with NULL pointer %zu\n", strlcat(dst, src, ft_strlen(dst)));
	// to compile strlcat you need to add flag -lbsd (for external library)
}