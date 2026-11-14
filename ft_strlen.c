/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpodgorn <kpodgorn@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 19:08:40 by kpodgorn          #+#    #+#             */
/*   Updated: 2026/11/14 22:03:48 by kpodgorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

// #include <stdio.h>

// int main(void)
// {
// 	printf("How many letters? %d\n", ft_strlen("Library"));
// }
/*
Functionality: Calculates the length of string s,
excluding the terminating null byte ('\0').
When to use: Constantly, to determine 
allocation sizes or locate the end of a string.
*/