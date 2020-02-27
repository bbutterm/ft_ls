/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarti <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 18:51:42 by mmarti            #+#    #+#             */
/*   Updated: 2019/04/15 18:51:45 by mmarti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	ft_strclr(char *s)
{
	size_t size;

	if (!s)
		return ;
	size = ft_strlen(s);
	ft_bzero(s, size);
}
