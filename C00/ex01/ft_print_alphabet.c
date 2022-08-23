/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahmad-v <jahmad-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 15:29:34 by jahmad-v          #+#    #+#             */
/*   Updated: 2022/08/15 17:39:24 by jahmad-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void);

int	main(void)
{
	char	letra;

	letra = 'a' ;
	while (letra <= 'z' )
	{
		write(1, &letra, 1);
		letra++;
	}
}

