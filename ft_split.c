/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pflorent <pflorent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 17:46:28 by pflorent          #+#    #+#             */
/*   Updated: 2021/01/08 17:46:53 by pflorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	free_all(char **to_free)
{
	int i;

	i = -1;
	while(to_free[++i])
		free(to_free[i]);
	free(to_free);
}

int		words_count(char const *s, char sep)
{
	int i;
	int count;


	i = 0;
	count = 0;
	while(s[i])
	{
		while(s[i] == sep)
			i++;
		if(s[i])
			count++;
		while(s[i] && (s[i] != sep))
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int i;
	int count;
	int len;
	char **dest;

	i = -1;
	count = words_count(s, c);
	if(!count)
	{
		if(!(dest[0] = malloc(sizeof(char)))) 
			return (NULL);
		*dest[0] = '\0';
		return (dest);
	}
	while(s[++i])
	{
		while(s[i] == c)
			i++;
		if(s[i])
		{





		}
	}
}
