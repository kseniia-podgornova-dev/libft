/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpodgorn <kpodgorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 19:08:33 by kpodgorn          #+#    #+#             */
/*   Updated: 2026/11/02 19:10:26 by kpodgorn         ###   ########.fr       */
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