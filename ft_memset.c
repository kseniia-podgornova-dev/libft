/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpodgorn <kpodgorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 19:13:54 by kpodgorn          #+#    #+#             */
/*   Updated: 2026/11/02 21:21:07 by kpodgorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
// #include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)str;
	while (n > 0)
	{
		*p = c;
		p++;
		n--;
	}
	return (str);
}

// #include <stdio.h>

// int	main()
// {
// 	char str[50] = "Who knows, knows";
// 	printf("Before: %s\n", str);
// 	ft_memset(str + 3, '-', 8*sizeof(char));
// 	printf("After: %s\n", str);
// }