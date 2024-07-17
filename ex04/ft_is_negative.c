/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deb <neaguolt@gmail.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 19:24:46 by deb               #+#    #+#             */
/*   Updated: 2024/07/17 20:02:41 by deb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//function prototype
void	ft_is_negative(int n);

//function definition
void	ft_is_negative(int n)
{
	if (n >= 0)
	{
		write(STDOUT_FILENO, "P", 1);
	}
	else
	{
		write(STDOUT_FILENO, "N", 1);
	}
}
