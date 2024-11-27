/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safamran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 14:46:48 by safamran          #+#    #+#             */
/*   Updated: 2024/11/22 10:27:29 by safamran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (unsigned char)c)
			return ((char *)&s[i]);
	i--;
	}	
	if (c == '\0')
		return ((char *)&s[i]);
	return (0);
}
/*
int main()
{
	const char *test = "mArvose";
	ft_strrchr(test, 65);

    return (0);
}*/
