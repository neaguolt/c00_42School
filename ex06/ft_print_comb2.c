/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deb <neaguolt@gmail.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 09:22:56 by deb               #+#    #+#             */
/*   Updated: 2024/07/18 17:21:42 by deb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// function prototype
void	ft_print_comb2(void);

// function declaration
void	ft_print_comb2(void)
{
	char	digit_no[5];
	int		no1;
	int		no2;

	no1 = 0;
	while (no1 < 98)
	{
		no2 = no1 + 1;
		while (no2 <= 99)
		{
			digit_no[0] = '0' + (no1 / 10);
			digit_no[1] = '0' + (no1 % 10);
			digit_no[2] = ' ';
			digit_no[3] = '0' + (no2 / 10);
			digit_no[4] = '0' + (no2 % 10);
			write(1, digit_no, 5);
			write(1, ", ", 2);
			no2++;
		}
		no1++;
	}
	write(1, "98 99", 5);
}
