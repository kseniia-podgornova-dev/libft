/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpodgorn <kpodgorn@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 21:24:58 by kpodgorn          #+#    #+#             */
/*   Updated: 2026/11/13 23:14:55 by kpodgorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	unsigned char	*temp;

	temp = (unsigned char *)str;
	while (n > 0)
	{
		*temp = '\0';
		temp++;
		n--;
	}
	return ;
}

// Ou tambem poderia ser assim
// void	ft_bzero(void *str, size_t n)
// {
// 	ft_memset(str, 0, n);
// }
// #include <stdio.h>
// int	main()
// {
// 	char str[20] = "Who knows, knows";
// 	printf("Before: %s\n", str);
// 	ft_bzero(str + 3, 8*sizeof(char));
// 	printf("After: %s\n", str);
// 	printf("Rest: %s\n", str + 11);
// }