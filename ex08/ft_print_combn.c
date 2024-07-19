/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deb <neaguolt@gmail.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 09:06:39 by deb               #+#    #+#             */
/*   Updated: 2024/07/19 18:09:54 by deb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//function prototype
void	ft_print_combn(int n);

//function declaration
void	ft_print_combn(int n)
{
	char	digit_buffer[10];
	int		i;
	int		done;
	int		poz;

	i = 0;
	while (i < n)
	{
		digit_buffer[i] = '0' + i;
		i++;
	}
	done = 0;
	while (!done)
	{
		write(1, digit_buffer, n);
		if (! poz == 0 || ! (digit_buffer[poz] == ('9' - (n - 1 - poz))))
		{
			write(1, ", ", 2);
		}
		poz = n - 1;
		while (poz >= 0 && digit_buffer[poz] == ('9' - (n - 1 - poz)))
		{
			poz = poz - 1;
		}
		if (poz < 0)
		{
			done = 1;
		}
		else
		{
			digit_buffer[poz] = digit_buffer[poz] + 1;
			i = poz + 1;
			while (i < n)
			{
				digit_buffer[i] = digit_buffer[i - 1] + 1;
				i++;
			}
		}
	}
}
