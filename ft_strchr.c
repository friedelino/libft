/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmaurer <fmaurer42@posteo.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 17:44:50 by fmaurer           #+#    #+#             */
/*   Updated: 2024/06/14 15:49:04 by fmaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The strchr() function returns a pointer to the first occurrence of the
// character c in the string s.
//
//   The strrchr() function returns a pointer to the last occurrence of the
//   character c in the string s.
//
//   Here "character" means "byte"; these functions do not work with wide
//   or multibyte characters.
//
// RETURN VALUE
//   The strchr() and strrchr() functions return a pointer to the matched
//   character or NULL if the character is not found.  The terminating null
//   byte is considered part of the string, so that if c is specified as
//   '\0', these functions return a pointer to the terminator.
char	*ft_strchr(const char *s, int c)
{
	char	*p;

	if (!s)
		return (NULL);
	p = (char *) s;
	while (*p)
	{
		if ((unsigned char)*p == (unsigned char)c)
			return (p);
		p++;
	}
	if ((unsigned char)c == '\0')
		return (p);
	return (NULL);
}
