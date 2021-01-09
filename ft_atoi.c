/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pflorent <pflorent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 16:45:02 by pflorent          #+#    #+#             */
/*   Updated: 2021/01/09 15:45:50 by pflorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



int		ft_atoi(const char *str)
{
	long	n;
	int		np;

	n = 0;
	np = 1;
	while ((*str == ' ') || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
	{
		np *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		n *= 10;
		n += (*str - '0');
		str++;
	}
	n *= np;
	return (n);
}
