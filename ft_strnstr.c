/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pflorent <pflorent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 16:44:22 by pflorent          #+#    #+#             */
/*   Updated: 2021/01/08 17:26:25 by pflorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *str, const char *find, unsigned int lgt)
{
	unsigned int i;

	if (*find == '\0' || lgt == 0)
		return (str);
	while (*str)
	{
		if (*str == *find)
		{
			i = 1;
			while (str[i] == find[i] && lgt > i)
				i++;
			if (find[i] == '\0' || i == lgt)
				return (str);
		}
		str++;
	}
	return (NULL);
}
