/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpodgorn <kpodgorn@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 23:56:36 by kpodgorn          #+#    #+#             */
/*   Updated: 2026/11/13 23:15:54 by kpodgorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

// #include <stdio.h>
// int	main (void)
// {
// 	printf("letter is: %c\n", ft_toupper('1'));
// }
/* 
Functionality: Converts a lowercase letter to its uppercase equivalent. 
Returns c unchanged if it is not a lowercase letter.
When to use: When normalizing text for case-insensitive comparisons.
*/