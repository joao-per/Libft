/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-per <joao-per@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 18:23:53 by joao-per          #+#    #+#             */
/*   Updated: 2022/09/05 18:23:53 by joao-per         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	negativo;
	int	resultado;

	i = 0;
	negativo = 1;
	resultado = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			negativo *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		resultado = (str[i] - '0') + (resultado * 10);
		i++;
	}
	return (resultado * negativo);
}
