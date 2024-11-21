/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safamran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 14:17:07 by safamran          #+#    #+#             */
/*   Updated: 2024/11/21 12:22:54 by safamran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	my_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int	lenun;

	int	lendeux;

	int		i;

	int	y;

	char	*news;
	
	i = 0;
	y = 0;
	lenun = my_strlen(s1);
	lendeux = my_strlen(s2);
	news = malloc(sizeof (char) * (lenun + lendeux + 1));
	if (!news)
		return (NULL);
	while (s1[i] != '\0')
	{
	news[i] = s1[i];
	i++;
	}
	while (s2[y] != '\0')
	{
	news[i] = s2[y];
	y++;
	i++;
	}
	news[i] = '\0';
	return (news);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_putstr(char *str)
{
	int i = 0;
	while(str[i] != '\0')
	{
		ft_putchar(str[i]);
	i++;
	}
}
int main()
{	
	char *prem = "doki";
	char *deux = "marvose";
	
	ft_putstr(prem);

	write(1, "\n", 1);

	ft_putstr(ft_strjoin(prem, deux));

return 0;
}
