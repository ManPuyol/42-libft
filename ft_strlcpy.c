/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manorteg <manorteg@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 23:11:32 by manorteg          #+#    #+#             */
/*   Updated: 2024/09/21 23:11:32 by manorteg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				src_length;

	if (!src)
		return (0);
	i = 0;
	src_length = 0;
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		src_length++;
		i++;
	}
	dest[i] = '\0';
	while (src[src_length] != '\0')
		src_length++;
	return (src_length);
}