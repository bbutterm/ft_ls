/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base_up.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbutterm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 18:45:42 by bbutterm          #+#    #+#             */
/*   Updated: 2019/09/28 18:45:43 by bbutterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_base_up(unsigned int value, int base)
{
	char	*str;
	long	n;
	int		i;

	n = value;
	i = 1;
	while ((n = n / base) >= 1)
		i++;
	if (!(str = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	str[i] = '\0';
	n = value;
	while (i--)
	{
		str[i] = (n % base < 10) ? n % base + '0' : n % base + 'A' - 10;
		n = n / base;
	}
	(i == 0) ? str[i] = '-' : 0;
	return (str);
}
