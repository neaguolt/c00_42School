/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deb <neaguolt@gmail.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 09:45:45 by deb               #+#    #+#             */
/*   Updated: 2024/07/18 12:31:15 by deb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//function prototype
void	ft_print_comb(void);

//function declaration
void	ft_print_comb(void)
{
	char	digit_no[5];

	digit_no[0] = '0';
	digit_no[3] = ',';
	digit_no[4] = ' ';
	while (digit_no[0] <= '6')
	{
		digit_no[1] = digit_no[0] + 1;
		while (digit_no[1] <= '8')
		{
			digit_no[2] = digit_no[1] + 1;
			while (digit_no[2] <= '9')
			{
				write(1, digit_no, 5);
				digit_no[2]++;
			}
			digit_no[1]++;
		}
		digit_no[0]++;
	}
	write(1, "789", 3);
}
