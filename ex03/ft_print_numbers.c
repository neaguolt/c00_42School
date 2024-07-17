/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deb <neaguolt@gmail.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 19:14:16 by deb               #+#    #+#             */
/*   Updated: 2024/07/17 19:19:03 by deb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//function prototype
void	ft_print_numbers(void);

//function prototype
void	ft_print_numbers(void)
{
	char	curent_char;

	curent_char = '0';
	while (curent_char <= '9')
	{
		write(1, &curent_char, 1);
		curent_char++;
	}
}
