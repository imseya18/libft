/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seya <seya@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 14:33:11 by mmorue            #+#    #+#             */
/*   Updated: 2022/10/01 01:40:13 by seya             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	calcul(char *str, int i, int k)
{	
	int	res;

	res = 0;
	while (str[i] >= 48 && str[i] <= 57)
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	if (k % 2 != 0)
		res = -res;
	return (res);
}

int	ft_atoi(char *str)
{
	int	i;
	int	k;
	int	j;

	i = 0;
	k = 0;
	j = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f'
		|| str[i] == '\r' || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			i++;
			k++;
		}
		if (str[i] == '+')
		{
			i++;
			j++;
		}
	}
	if (j > 1 || k > 1 || (k + j) > 1)
		return(0);
	return (calcul(str, i, k));
}
