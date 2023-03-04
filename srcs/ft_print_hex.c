/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htekeste <htekeste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 13:02:33 by htekeste          #+#    #+#             */
/*   Updated: 2023/03/04 16:53:59 by htekeste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	include "../ft_printf.h"

int	ft_count_hex_digits(unsigned int nbr)
{
	int	count;

	count = 0;
	while (nbr)
	{
		count++;
		nbr /= 16;
	}
	return (count);
}

void	ft_puthex(unsigned int nbr, char type)
{
	if (nbr < 16)
	{
		if (nbr <= 9)
		{
			ft_putchar_fd(nbr + '0', 1);
		}
		else
		{
			if (type == 'x')
			{
				ft_putchar_fd((nbr % 10) + 'a', 1);
			}
			else
			{
				ft_putchar_fd((nbr % 10) + 'A', 1);
			}
		}
	}
	else
	{
		ft_print_hex(nbr / 16, type);
		ft_print_hex(nbr % 16, type);
	}
}

int	ft_print_hex(unsigned long nbr, char type)
{
	if (nbr == 0)
	{
		ft_putnbr_fd(0, 1);
		return (1);
	}
	ft_puthex((unsigned int) nbr, type);
	return (ft_count_hex_digits(nbr));
}
