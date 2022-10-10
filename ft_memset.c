/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seya <seya@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 12:25:35 by mmorue            #+#    #+#             */
/*   Updated: 2022/10/03 23:19:35 by seya             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned int i;

	i = 0;

	while(i < n)
	{
		((unsigned char *)s)[i] = (unsigned char)c;
		i++;
	}
	return(s);
}

/*int main(void)
{
	char tab[] = "salut";
	ft_memset(tab, 'c', 5);
}*/