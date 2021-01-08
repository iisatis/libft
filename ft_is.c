/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pflorent <pflorent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 16:28:33 by pflorent          #+#    #+#             */
/*   Updated: 2021/01/08 16:58:04 by pflorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_isalpha(int a)
{
    if (a >= 'a' && a <= 'z')
        return 2;
    else if (a >= 'A' && a <= 'Z')
        return 1;
    else
        return 0;
}

int     ft_isdigit(int a)
{
    if (a >= '0' && a <= '9')
        return 1;
    else
        return 0;
}

int     ft_isalnum(int a)
{
    if ((a >= 'a' && a <= 'z')
        || (a >= 'A' && a <= 'Z')
        || (a >= '0' && a <= '9'))
        return 1;
    else
        return 0;
}

int     ft_isascii(int a)
{
    if (a >= 0 && a <= 0177)
        return 1;
    else
        return 0;
}

int     ft_isprint(int a)
{
    if (a >= 32 && a <= 126)
        return 1;
    else
        return 0;
}
