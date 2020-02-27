/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_decimal.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbutterm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 18:45:56 by bbutterm          #+#    #+#             */
/*   Updated: 2019/09/28 18:45:58 by bbutterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_decimal(unsigned int value, unsigned int base)
{
	int				len;
	char			*s;
	unsigned int	n;

	len = 1;
	n = value;
	while ((n = n / base) >= 1)
		len++;
	if (!(s = (char*)malloc(sizeof(char) * len + 1)))
		return (NULL);
	s[len] = '\0';
	while (value >= base)
	{
		s[--len] = "0123456789abcdef"[value % base];
		value /= base;
	}
	s[--len] = "0123456789abcdef"[value % base];
	return (s);
}
