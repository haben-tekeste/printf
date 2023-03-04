/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htekeste <htekeste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 12:58:00 by htekeste          #+#    #+#             */
/*   Updated: 2023/03/04 17:00:53 by htekeste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include "./libft/libft.h"

int	ft_printf(const char *ft, ...);
int	ft_print_str(char *s);
int	ft_print_num(int nbr);
int	ft_print_percent(char c);
int	ft_print_char(int c);
int	ft_print_hex(unsigned long nbr, char type);
int	ft_print_ptr(unsigned long long nbr);
int	ft_print_unsigned_decimal(unsigned int nbr);

#endif