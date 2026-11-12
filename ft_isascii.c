/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kseniiapodgornova <kseniiapodgornova@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 19:08:18 by kpodgorn          #+#    #+#             */
/*   Updated: 2026/11/12 20:22:58 by kseniiapodg      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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