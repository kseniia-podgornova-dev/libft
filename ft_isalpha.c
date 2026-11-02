/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpodgorn <kpodgorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 19:08:11 by kpodgorn          #+#    #+#             */
/*   Updated: 2026/11/02 19:10:02 by kpodgorn         ###   ########.fr       */
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