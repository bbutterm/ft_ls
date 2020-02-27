/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_octal.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbutterm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 18:46:10 by bbutterm          #+#    #+#             */
/*   Updated: 2019/09/28 18:46:11 by bbutterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_octal(unsigned int value, int base)
{
	unsigned int	n;
	char			*str;
	int				i;

	i = 1;
	n = value;
	while ((n = n / base) >= (unsigned)base)
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
