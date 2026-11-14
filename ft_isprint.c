/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpodgorn <kpodgorn@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 19:08:33 by kpodgorn          #+#    #+#             */
/*   Updated: 2026/11/13 23:15:29 by kpodgorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("Is it printable? \n%s\n", ft_isprint(' ') ? "Yes" : "Nope");
// }
/*
Functionality: Checks if c is a printable character, 
including the space character (ASCII 32 through 126).
When to use: When ensuring terminal output does not 
contain invisible control characters like \n or \t.
*/