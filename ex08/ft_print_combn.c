/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deb <neaguolt@gmail.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 09:06:39 by deb               #+#    #+#             */
/*   Updated: 2024/07/22 16:06:22 by deb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combn(int n)
{
	char	digit_buffer[11];
	int		i;

	if (n < 1 || n > 9)
		return ;
	*digit_buffer = '0';
	i = 0;
	while (++i < n)
		digit_buffer[i] = digit_buffer[i - 1] + 1;
	digit_buffer[n] = ',';
	digit_buffer[n + 1] = ' ';
	while (*digit_buffer < 58 - n)
	{
		write(1, digit_buffer, n + 2);
		i = n;
		while (i--)
			if (++digit_buffer[i] <= 58 - n + i)
				break ;
		while (++i > 0 && i < n)
			digit_buffer[i] = digit_buffer[i - 1] + 1;
	}
	write(1, digit_buffer, n);
}
