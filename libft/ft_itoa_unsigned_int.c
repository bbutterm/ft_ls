/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_unsigned_int.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbutterm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 18:46:42 by bbutterm          #+#    #+#             */
/*   Updated: 2019/09/28 18:46:44 by bbutterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_unsigned_int(unsigned int value)
{
	char			*str;
	unsigned int	n;
	int				i;

	n = value;
	i = 1;
	while ((n = n / 10) >= 1)
		i++;
	if (!(str = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	str[i] = '\0';
	n = value;
	while (i--)
	{
		str[i] = n % 10 + '0';
		n = n / 10;
	}
	(i == 0) ? str[i] = '-' : 0;
	return (str);
}
