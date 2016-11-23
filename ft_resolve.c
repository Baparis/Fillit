/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resolve.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baparis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 12:35:32 by baparis           #+#    #+#             */
/*   Updated: 2016/11/23 16:23:13 by baparis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"


t_list	*ft_lstmap(char *file)
{
	t_list	*lst;
	int	i;

	i = 0;
	if (file)
	{
		if (!(lst->piece1d = (char*)malloc(sizeof(char) * 20)))
			return(NULL);
		if (!(lst->piece2d = (char**)malloc(sizeof(char*) * 4)))
			return (NULL);
		while (i < 4)
			if (!(lst->piece2d[i++] = (char*)malloc(sizeof(char) * 5)))
				return (NULL);
		lst->used = 0;
		ft_strncpy(lst->piece1d, file, 19);
		lst->piece1d[20] = '\0';
		i = 0;
		while (i < 4)
		{
			ft_strncpy(lst->piece2d[i], file + (5 * i), 4);
			lst->piece2d[i++][5] = '\0';
		}
		lst->next = ft_lstmap(file + 21);
		return (lst);
	}
	return (NULL);
}

int	ft_resolve(int ac, char **av, char **solve)
{
	t_list	*lst;
	int		fd;
	char	*file;

	if ((fd = open(av[1], O_RDONLY)) == -1)
		return (0);
	file = ft_read_and_fill(fd);
	lst = ft_lstmap(file);
	return (1);
}
