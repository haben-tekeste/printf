/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_percent.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htekeste <htekeste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 12:40:13 by htekeste          #+#    #+#             */
/*   Updated: 2023/03/04 16:54:41 by htekeste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	include "../ft_printf.h"

int	ft_print_percent(char c)
{
	if (!c)
		return (0);
	ft_putchar_fd((int)c, 1);
	return (1);
}
