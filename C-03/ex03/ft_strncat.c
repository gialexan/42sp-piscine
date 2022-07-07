/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gialexan <gialexan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 20:13:37 by gialexan          #+#    #+#             */
/*   Updated: 2022/04/22 12:58:34 by gialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	j;
	unsigned int	len;

	j = 0;
	len = ft_strlen(dest);
	while (src[j] != '\0' && j < nb)
	{
		dest[len] = src[j];
		len++;
		j++;
	}
	dest[len] = '\0';
	return (dest);
}
