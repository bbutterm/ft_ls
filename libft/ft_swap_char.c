/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_char.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbutterm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 18:51:39 by bbutterm          #+#    #+#             */
/*   Updated: 2019/09/28 18:51:40 by bbutterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap_char(char *a, char *c)
{
	int temp;

	temp = *a;
	*a = *c;
	*c = temp;
}
