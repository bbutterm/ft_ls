/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbutterm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 18:26:24 by bbutterm          #+#    #+#             */
/*   Updated: 2019/09/28 18:26:25 by bbutterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_ls.h"

void	write_name(t_obj *lst, t_column *col)
{
	if (!lst)
		return ;
	if (g_l)
		write_long(lst, col);
	else
		ft_printf("%s\n", lst->name);
}

void	write_long(t_obj *lst, t_column *col)
{
	if (col && col->group)
	{
		ft_printf("%s %*s", lst->mod, col->links, lst->links);
		ft_printf(" %-*s %-*s", col->master,
				lst->master, col->group, lst->group);
		if (!lst->size)
			ft_printf(" %*s, %*s", col->maj, lst->maj, col->min, lst->min);
		else
			ft_printf(" %*s", col->size, lst->size);
		ft_printf(" %s %*s %*s", lst->time_month,
				col->time_day, lst->time_day, col->time_year, lst->time_year);
		ft_printf(" %s", lst->name);
		if (lst->linked_file)
			ft_printf(" -> %s", lst->linked_file);
		ft_printf("\n");
	}
}
