/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpodgorn <kpodgorn@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 23:56:30 by kpodgorn          #+#    #+#             */
/*   Updated: 2026/11/12 23:56:49 by kpodgorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

// #include <stdio.h>
// int	main (void)
// {
// 	printf("letter is: %c\n", ft_toupper('1'));
// }
/* 
Functionality: Converts an uppercase letter to its lowercase equivalent. 
Returns c unchanged if it is not an uppercase letter.
When to use: When standardizing strings to lowercase before storing or matching keywords.
*/