/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   for_help2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbutterm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 18:20:31 by bbutterm          #+#    #+#             */
/*   Updated: 2019/09/28 18:20:32 by bbutterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*join_plus(char *str)
{
	char	*temporary;

	temporary = str;
	str = ft_strjoin("+", temporary);
	free(temporary);
	return (str);
}

char	*join_space(char *str)
{
	char	*temporary;

	temporary = str;
	str = ft_strjoin(" ", temporary);
	free(temporary);
	return (str);
}

char	*join_zero(char *str)
{
	char	*temporary;

	temporary = str;
	str = ft_strjoin("0", temporary);
	free(temporary);
	return (str);
}
