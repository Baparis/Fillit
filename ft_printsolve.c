/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printsolve.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baparis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 11:59:22 by baparis           #+#    #+#             */
/*   Updated: 2016/11/23 12:35:17 by baparis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		write(1, &str[i], 1);
}

void	ft_printsolve(char **solve)
{
	int	i;

	i = 0;
	while (solve[i] != 0)
		ft_putstr(solve[i++]);
}
