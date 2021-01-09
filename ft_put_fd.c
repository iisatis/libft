/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_fd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pflorent <pflorent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 16:51:55 by pflorent          #+#    #+#             */
/*   Updated: 2021/01/09 16:03:59 by pflorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putstr_fd(char *s, int fd)
{
	int i;

	i = -1;
	while (s[++i])
		write(fd, &s[i], 1);
}

void	ft_putendl_fd(char *s, int fd)
{
	int i;

	i = -1;
	while (s[++i])
		write(fd, &s[i], 1);
	write(fd, '\n', 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	n += '0';
	write(fd, &n, 1);
}
