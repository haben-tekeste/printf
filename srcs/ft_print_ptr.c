/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htekeste <htekeste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 14:39:20 by htekeste          #+#    #+#             */
/*   Updated: 2023/03/04 16:56:15 by htekeste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_countchar(unsigned long long p)
{
	int	count;

	count = 0;
	while (p != 0)
	{
		count++;
		p = p / 16;
	}
	return (count);
}

void	ft_writehex(unsigned long long p)
{
	if (p >= 16)
	{
		ft_writehex(p / 16);
		ft_writehex(p % 16);
	}
	else if (p > 9)
		ft_putchar_fd(p - 10 + 'a', 1);
	else
		ft_putchar_fd(p + '0', 1);
}

int	ft_print_ptr(unsigned long long adr)
{
	int	counter;

	counter = 2;
	ft_putchar_fd('0', 1);
	ft_putchar_fd('x', 1);
	if (adr == 0)
	{
		write(1, "0", 1);
		return (++counter);
	}
	ft_writehex(adr);
	counter += ft_countchar(adr);
	return (counter);
}
