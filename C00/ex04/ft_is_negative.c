/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yael-mar <elmardi.yas@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 12:04:41 by yael-mar          #+#    #+#             */
/*   Updated: 2026/03/04 12:04:41 by yael-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_is_negative(int n)
{
	char negative;
	char positive;

	negative = 'N';
	positive = 'P';
	if (n < 0)
	{
		write(1, &negative, 1);
	}
	else
	{
		write(1, &positive, 1);
	}
}
