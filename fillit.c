/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baparis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 11:49:30 by baparis           #+#    #+#             */
/*   Updated: 2016/11/23 16:23:18 by baparis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	main(int ac, char **av)
{
	char	**solve;
	int		i;
	int		j;

	j = 0;
	i = 3;
	if (ft_inputchck(ac, av))
		return (0);
	if (!(solve = (char**)malloc(sizeof(char *) * i)))
		return (0);
	while (j < i)
		if (!(solve[j++] = (char*)malloc(sizeof(char) * i)))
			return (0);
	solve[j][0] = 0;
	if (ft_resolve(ac, av, solve) == 0)
	{
		j = 0;
		i++;
		if (!(solve = (char**)malloc(sizeof(char *) * i)))
			return (0);
		while (j < i)
			if (!(solve[j++] = (char*)malloc(sizeof(char) * i)))
				return (0);
		solve[j][0] = 0;
	}
	ft_printsolve(solve);
	return (0);
}
