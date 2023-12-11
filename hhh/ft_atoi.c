/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmalawl <asmalawl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 10:54:34 by asmalawl          #+#    #+#             */
/*   Updated: 2023/11/26 11:45:19 by asmalawl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *s)
{
	unsigned int	i;
	long			sign;
	long			result;

	i = 0;
	sign = 1;
	result = 0;
	while (s[i] == 32 || (s[i] >= 9 && s[i] <= 13))
		i++;
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			sign = -1;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		if (result >= LONG_MAX / 10 && sign == 1)
			return (-1);{
		else if (result >= LONG_MAX / 10 && sign == -1) // long_max is for overflow
			return (0);
		result = result * 10 + (s[i] - '0');
		i++;
	}
	return ((int)result * sign);
}
