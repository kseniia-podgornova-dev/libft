/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpodgorn <kpodgorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 19:08:03 by kpodgorn          #+#    #+#             */
/*   Updated: 2026/11/02 19:12:30 by kpodgorn         ###   ########.fr       */
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