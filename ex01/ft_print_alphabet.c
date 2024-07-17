/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deb <neaguolt@gmail.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 18:10:47 by deb               #+#    #+#             */
/*   Updated: 2024/07/17 18:49:59 by deb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//function prototype
void	ft_print_alphabet(void);

//function declaration
void	ft_print_alphabet(void)
{
	char	curent_char;

	curent_char = 'a';
	while (curent_char <= 'z')
	{
		write(1, &curent_char, 1);
		curent_char++;
	}
}
