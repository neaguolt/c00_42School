/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deb <neaguolt@gmail.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 18:57:20 by deb               #+#    #+#             */
/*   Updated: 2024/07/17 19:01:29 by deb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//function prototype
void	ft_print_reverse_alphabet(void);

//function declaration
void	ft_print_reverse_alphabet(void)
{
	char	curent_char;

	curent_char = 'z';
	while (curent_char >= 'a')
	{
		write(1, &curent_char, 1);
		curent_char--;
	}
}
