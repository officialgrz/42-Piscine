/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egrazina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 15:54:53 by egrazina          #+#    #+#             */
/*   Updated: 2020/10/28 15:54:55 by egrazina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char *i;

	i = str;
	while (*i != '\0')
	{
		if (*i >= 'a' && *i <= 'z')
			*i -= ' ';
		i++;
	}
	return (str);
}