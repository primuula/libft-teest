/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safamran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 16:04:40 by safamran          #+#    #+#             */
/*   Updated: 2024/11/27 16:26:59 by safamran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	my_strlen(const char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
		a++;
	return (a);
}

int	find(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (1);
	i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		deb;
	int		fin;
	int		i;
	char	*new;

	deb = 0;
	if (s1[deb] == '\0')
	{
		new = malloc(sizeof (char) * 1);
		if (!new)
			return (NULL);
		new[0] = '\0';
		return (new);
	}
	while (s1[deb] && find(s1[deb], set))
		deb++;
	fin = my_strlen(s1);
	while (fin > deb && find(s1[fin - 1], set))
		fin--;
	new = malloc (sizeof(char *) * (fin - deb + 1));
	if (!new)
		return (NULL);
	i = 0;
	while (deb < fin)
		new[i++] = s1[deb++];
	new[i] = '\0';
	return (new);
}
/*
int main()
{
	char *s1 = "bcdTESTssbszzz";
	char *set = "bcdz";
	char *test;
	test = (ft_strtrim(s1, set));
	printf("%s", test);
return (0);
}*/
