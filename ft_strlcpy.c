/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmaurer <fmaurer42@posteo.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 11:33:29 by fmaurer           #+#    #+#             */
/*   Updated: 2024/06/14 15:37:58 by fmaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len;

	if (!dst || !src)
		return (0);
	len = ft_strlen(src);
	if (!size)
		return (len);
	if (size == 1)
	{
		*dst = '\0';
		return (len);
	}
	while (--size && *src)
		*(dst++) = *(src++);
	*(dst++) = '\0';
	return (len);
}
