/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_unsigned_long.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbutterm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 18:46:52 by bbutterm          #+#    #+#             */
/*   Updated: 2019/09/28 18:46:53 by bbutterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_unsigned_long(unsigned long value, int base)
{
	char			*str;
	unsigned long	n;
	long			i;

	n = value;
	i = 1;
	while ((n = n / base) >= 1)
		i++;
	if (!(str = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	str[i] = '\0';
	while (value >= (unsigned)base)
	{
		str[--i] = "0123456789abcdef"[value % base];
		value /= base;
	}
	str[--i] = "0123456789abcdef"[value % base];
	return (str);
}
