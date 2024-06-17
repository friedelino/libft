/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmaurer <fmaurer42@posteo.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 08:43:54 by fmaurer           #+#    #+#             */
/*   Updated: 2024/06/10 10:36:07 by fmaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*ds;
	char	*sr;

	if (!dest || !src)
		return (NULL);
	ds = (char *) dest;
	sr = (char *) src;
	i = -1;
	while (++i < n)
		ds[i] = sr[i];
	return (dest);
}
