/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htekeste <htekeste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 13:23:30 by htekeste          #+#    #+#             */
/*   Updated: 2023/03/04 17:16:52 by htekeste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

char			*ft_itoa(int n);

void			ft_putchar_fd(char c, int fd);

void			ft_putstr_fd(char *s, int fd);

#endif