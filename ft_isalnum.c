/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kseniiapodgornova <kseniiapodgornova@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 19:08:03 by kpodgorn          #+#    #+#             */
/*   Updated: 2026/11/12 19:53:06 by kseniiapodg      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("Is alpha-numeric? \n%s\n", ft_isalnum(' ') ? "Yes" : "Nope");
// }
/*
Functionality: Checks if c is either an alphabetic letter or a decimal digit.
When to use: When parsing usernames, variable identifiers, or alphanumeric tokens.
*/