/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kseniiapodgornova <kseniiapodgornova@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 19:08:11 by kpodgorn          #+#    #+#             */
/*   Updated: 2026/11/12 19:53:02 by kseniiapodg      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c < 'A' || c > 'Z') && (c < 'a' || c > 'z'))
		return (0);
	return (1);
}

// #include <stdio.h>

// int main(void)
// {
// 	printf("Is alfa? \n%s\n", ft_isalpha('A') ? "Yes" : "Nope");
// }
/* 
Functionality: Checks if c is an alphabetic letter (uppercase or lowercase 
'A'–'Z' or 'a'–'z'). Returns non-zero if true and 0 if false.
When to use: When validating that user input contains only letters.
*/