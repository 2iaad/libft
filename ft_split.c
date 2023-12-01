/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zderfouf <zderfouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:26:11 by zderfouf          #+#    #+#             */
/*   Updated: 2023/11/30 22:30:00 by zderfouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free(char **p2s, int wc)
{
	while (wc--)
		free(p2s[wc]);
	free(p2s);
}

static int	ft_wc(char const *s, char c)
{
	int	wc;
	int	i;

	wc = 0;
	i = 0;
	while (s[i])
	{
		if ((i == 0 && s[i] != c) || (s[i] != c && (s[i - 1] == c)))
			wc++;
		i++;
	}
	return (wc);
}

static char	*allocat_andcopy_words(const char *s, int start, int end)
{
	char	*word;
	int		i;

	i = 0;
	word = (char *) malloc (sizeof(char) * (end - start + 1));
	if (!word)
		return (NULL);
	while (start < end)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}

static char	**sizeofwords(int wc, const char *s, char c, char **p2s)
{
	int		wa;
	size_t	i;
	size_t	j;

	wa = 0;
	i = 0;
	while (wa < wc)
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		p2s[wa] = allocat_andcopy_words(s, j, i);
		if (p2s[wa] == NULL)
		{
			ft_free(p2s, wa);
			return (NULL);
		}
		wa++;
	}
	return (p2s);
}

char	**ft_split(const char *s, char c)
{
	char	**p2s;
	int		wc;

	if (s == NULL)
		return (NULL);
	wc = ft_wc(s, c);
	p2s = (char **) malloc (sizeof(char *) * (wc + 1)); 
	if (!p2s) 
		return (NULL);
	p2s = sizeofwords(wc, s, c, p2s);
	if (!p2s)
		return (NULL);
	p2s[wc] = NULL;
	return (p2s);
}
