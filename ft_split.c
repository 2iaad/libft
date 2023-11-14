/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zderfouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:26:11 by zderfouf          #+#    #+#             */
/*   Updated: 2023/11/14 20:26:12 by zderfouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static  int ft_wc(char const *s, char c) // looks for a word 9bel mnha ' '
{
    int        wc;
    int        i;

    wc = 0;
    i = 0;
    while (s[i])
    {
        if (  (i == 0 && s[i] != c)  || (s[i] != c && (s[i - 1] == c))  ) // first case: ila kant 7rf lwl kay != ' ' ======> start of a word ===> increment wc. // special case !!!!
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
	word = (char *) malloc (sizeof(char)*(end - start + 1)); // +1 for the null terminator
	while (start < end)
		word[i++] = s[start++];
	return (word);
}

static  char **assign_words(int wc,const char *s , char c,char **p2s)
{
    int word_allocation;
    size_t i; // indicats last of the word
    size_t j; // indicats first of the word

    word_allocation = 0;
    i = 0;
    while (word_allocation < wc)
    {
        while(s[i] == c)
            i++;
        j = i;
        while (s[i] != c && s[i] != '\0') // Find the end of the word
            i++;
        p2s[word_allocation] = allocat_andcopy_words(s, j, i); // Create word and store i
        word_allocation++;
    }
    p2s[word_allocation] = NULL; // Null-terminate the array of strings
    return (p2s);
}
char    **ft_split(const char *s, char c)
{
    int i;
    int wc;
    char **ptr2str;

    i = 0;
    wc = ft_wc(s, c);
    ptr2str = (char **) malloc (sizeof(char *) * (wc + 1)); // Allocate space for array of pointers to strings(words)

    if (!ptr2str) // Check if memory allocation failed
        return NULL;
    ptr2str = assign_words(wc,s,c,ptr2str);
    if (!ptr2str)
    {
        while (i < wc)
        {
            free(ptr2str[i]); //freeing the memory allocated for each word,
            i++;
        }
        free(ptr2str); //deallocates the memory block for the array of pointers to strings
    }
    return (ptr2str);
}


int main()
{
    char *stringgg = "  salam ana smiti ziad";
    char **ptr2str = ft_split(stringgg,' ');

    if (ptr2str)
    {
        int i = 0;
        while (ptr2str[i] != NULL)
        {
            printf("Word %d: %s\n", i + 1, ptr2str[i]);
            i++;
        }
    }
    char *str = (char *)malloc(6);
    str = "hello";
    printf("%s\n", str);
}
