/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safamran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:41:28 by safamran          #+#    #+#             */
/*   Updated: 2024/11/21 14:52:27 by safamran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int c;

	c = 0;
	if (n <= 0)
		return (0);
	while (s1[c] != '\0' && c < n -1)
	{
		if (s1[c] != s2[c])
			return (s1[c] - s2[c]);
	c++;
	}
	return (s1[c] - s2[c]);
}
/*
#include <unistd.h>
#include <string.h>
int main()
{
	int s = 5;
	char prem[] = "Bonjour";
	char deux[] = "Bonjour";
	if (ft_strncmp(prem, deux, s) == 0)
		write(1, "0" ,1);
	if (ft_strncmp(prem, deux, s) > 0)
		write(1, "1" ,1);
	if (ft_strncmp(prem, deux, s) < 0)
		write(1, "-1", 2);

	if (strncmp(prem, deux, s) == 0)
                write(1, "0" ,1);
        if (strncmp(prem, deux, s) > 0)
                write(1, "1" ,1);
        if (strncmp(prem, deux, s) < 0)
                write(1, "-1", 2);

return 0;
}
*/
