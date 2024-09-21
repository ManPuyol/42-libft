/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manorteg <manorteg@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 23:16:57 by manorteg          #+#    #+#             */
/*   Updated: 2024/09/21 23:16:57 by manorteg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	is_negative;
	int	result;
	int	i;

	i = 0;
	is_negative = 0;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 12) || (str[i] == ' '))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			is_negative++;
		i++;
	}
	while (str[i] && ((str[i] >= '0' && str[i] <= '9')))
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	if (is_negative % 2 == 1)
		result *= -1;
	return (result);
}