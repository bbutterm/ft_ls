/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbutterm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 18:25:04 by bbutterm          #+#    #+#             */
/*   Updated: 2019/09/28 18:25:06 by bbutterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_ls.h"

char	*cut_noyear(char *tmp)
{
	char	*str;
	int		i;
	int		j;

	j = 0;
	i = 0;
	while (tmp[i] != 0)
	{
		if (tmp[i] == ':')
			++j;
		if (j == 2)
			tmp[i] = 0;
		++i;
	}
	str = ft_strdup(tmp);
	return (str);
}

char	*convert_size(long size)
{
	char			*str;

	str = ft_itoa(size);
	return (str);
}

char	*convert_gid(unsigned int gid)
{
	struct group	*tmp;
	char			*str;

	tmp = getgrgid(gid);
	str = 0;
	if (tmp)
		str = ft_strdup(tmp->gr_name);
	return (str);
}

char	*convert_uid(unsigned int uid)
{
	struct passwd	*tmp;
	char			*str;

	str = 0;
	tmp = getpwuid(uid);
	if (tmp)
		str = ft_strdup(tmp->pw_name);
	return (str);
}

char	*convert_links(int links)
{
	char			*str;

	str = ft_itoa(links);
	return (str);
}
