/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htekeste <htekeste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 16:24:06 by htekeste          #+#    #+#             */
/*   Updated: 2023/01/17 16:39:10 by htekeste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	include "libft.h"

int	ft_count_digits(int n)
{
	int	count;

	count = 0;
	n <= 0 && count++;
	while (n)
	{
		count++;
		n /= 10;
	}
	return (count);
}

char	*ft_update(char *str, long nb, int index)
{
	while (nb > 0)
	{
		str[index] = 48 + (nb % 10);
		nb = nb / 10;
		index--;
	}
	return (str);
}

char	*ft_itoa(int nb)
{
	char	*result;
	int		digit;
	long	num;

	digit = ft_count_digits(nb);
	num = nb;
	result = (char *) malloc(sizeof(char) * (digit + 1));
	if (!result)
		return (NULL);
	result[digit--] = '\0';
	if (num == 0)
	{
		result[0] = 48;
	}
	if (num < 0)
	{
		result[0] = '-';
		num = num * -1;
	}
	if (num > 0)
		return (ft_update(result, num, digit));
	return (result);
}
