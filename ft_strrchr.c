/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seya <seya@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 12:25:35 by mmorue            #+#    #+#             */
/*   Updated: 2022/10/11 00:48:38 by seya             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
char	*ft_strrchr(const char *s, int c)
{ 
	int i;

	i = 0;
	while(s[i])
		i++;
	while(i >= 0)
	{
		if(s[i] == c)
			return((char *)&s[i]);
		i--;
	}
	return(0);
}
//int main (void)
//{
//	char tab[] = "salut";
//	printf("%s\n",ft_strrchr(tab, 's'));
//	printf("%s\n",strrchr(tab, 's'));
//	return(0);
//}