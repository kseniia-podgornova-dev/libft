/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpodgorn <kpodgorn@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 19:08:26 by kpodgorn          #+#    #+#             */
/*   Updated: 2026/11/13 23:15:25 by kpodgorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("is digit? \n%s\n", ft_isdigit('a') ? "Yes" : "Nope");
// }
/* 
Functionality: Checks if c is a decimal digit ('0'–'9'). 
Returns non-zero if true and 0 if false.
When to use: Before converting string characters 
into numbers or validating numeric inputs.
*/