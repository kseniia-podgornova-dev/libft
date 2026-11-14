/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpodgorn <kpodgorn@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 22:44:53 by kpodgorn          #+#    #+#             */
/*   Updated: 2026/11/13 23:15:20 by kpodgorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
/*
Functionality: Checks if c fits within the standard 
7-bit ASCII table (values 0 through 127).
When to use: When filtering out extended or corrupted 
characters before processing text.
*/