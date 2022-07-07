/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gialexan <gialexan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 13:07:11 by gialexan          #+#    #+#             */
/*   Updated: 2022/04/22 12:56:33 by gialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{	
	int	j;
	int	len;

	j = 0;
	len = ft_strlen(dest);
	while (src[j] != '\0')
	{
		dest[len] = src[j];
		j++;
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
