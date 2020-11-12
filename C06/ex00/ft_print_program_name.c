/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egrazina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 01:49:38 by egrazina          #+#    #+#             */
/*   Updated: 2020/11/05 01:50:40 by egrazina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char *argv[])
{
	--argc;
	while (*argv[argc])
		write(1, argv[argc]++, 1);
	write(1, "\n", 1);
	return (0);
}
