/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorue <mmorue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:05:29 by mmorue            #+#    #+#             */
/*   Updated: 2022/11/04 16:59:21 by mmorue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		k;
	char	*str;

	i = 0;
	k = 0;
	str = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!str)
		return (0);
	while (s1[i])
	{
		str[k] = s1[i];
		i++;
		k++;
	}
	i = 0;
	while (s2[i])
	{
		str[k] = s2[i];
		i++;
		k++;
	}
	str[k] = '\0';
	return (str);
}
