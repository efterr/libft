/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseidame <eseidame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 09:37:40 by eseidame          #+#    #+#             */
/*   Updated: 2020/03/10 20:48:52 by eseidame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	int		index1;
	int		index2;

	index1 = 0;
	index2 = 0;
	while (src[index1] != '\0')
	{
		dst[index2] = src[index1];
		index2++;
		index1++;
	}
	dst[index2] = '\0';
	return (dst);
}
