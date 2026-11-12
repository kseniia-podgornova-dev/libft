/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kseniiapodgornova <kseniiapodgornova@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 19:08:33 by kpodgorn          #+#    #+#             */
/*   Updated: 2026/11/12 20:22:35 by kseniiapodg      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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